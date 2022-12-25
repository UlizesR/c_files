#include <QRegularExpression>
#include "calculator.h"
#include "ui_calculator.h"

double calcValue = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent) : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcValue));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; ++i)
    {
        QString butName = "Button_" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Button_Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_Subtraction, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_Multiplication, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_Division, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_Equals, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->Button_sign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0))
    {
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButtonPressed()
{
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcValue = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0)
    {
        divTrigger = true;

    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0)
    {
        multTrigger = true;

    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0)
    {
        addTrigger = true;

    } else
    {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualButton()
{
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if (addTrigger || subTrigger || multTrigger || divTrigger)
    {
        if(addTrigger)
        {
            solution = calcValue + dblDisplayVal;
        }
        else if(subTrigger)
        {
            solution = calcValue - dblDisplayVal;
        }
        else if(multTrigger)
        {
            solution = calcValue * dblDisplayVal;
        }
        else
        {
            solution = calcValue / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}


void Calculator::ChangeNumberSign()
{
    QString displayVal = ui->Display->text();
    QRegularExpression reg("[-]?[0-9.]*");
    if (reg.exactMatch(displayVal))
    {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}
