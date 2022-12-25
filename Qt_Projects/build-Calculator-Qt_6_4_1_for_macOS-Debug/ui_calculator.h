/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button_Add_Memory;
    QPushButton *Button_8;
    QPushButton *Button_Clear;
    QPushButton *Button_9;
    QPushButton *Button_Division;
    QPushButton *Button_7;
    QPushButton *Button_4;
    QPushButton *Button_1;
    QPushButton *Button_5;
    QPushButton *Button_2;
    QPushButton *Button_0;
    QPushButton *Button_6;
    QPushButton *Button_3;
    QPushButton *Button_sign;
    QPushButton *Button_Multiplication;
    QPushButton *Errase_Memory;
    QPushButton *Button_Add;
    QPushButton *Button_Subtraction;
    QPushButton *Retrieve_Memory;
    QPushButton *Button_Equals;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button_Add_Memory = new QPushButton(centralwidget);
        Button_Add_Memory->setObjectName("Button_Add_Memory");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_Add_Memory->sizePolicy().hasHeightForWidth());
        Button_Add_Memory->setSizePolicy(sizePolicy1);
        Button_Add_Memory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Add_Memory, 1, 4, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        sizePolicy1.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy1);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        Button_Clear = new QPushButton(centralwidget);
        Button_Clear->setObjectName("Button_Clear");
        sizePolicy1.setHeightForWidth(Button_Clear->sizePolicy().hasHeightForWidth());
        Button_Clear->setSizePolicy(sizePolicy1);
        Button_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Clear, 4, 0, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        sizePolicy1.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy1);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Button_Division = new QPushButton(centralwidget);
        Button_Division->setObjectName("Button_Division");
        sizePolicy1.setHeightForWidth(Button_Division->sizePolicy().hasHeightForWidth());
        Button_Division->setSizePolicy(sizePolicy1);
        Button_Division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Division, 1, 3, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        sizePolicy1.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy1);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        sizePolicy1.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy1);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        sizePolicy1.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy1);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        sizePolicy1.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy1);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        sizePolicy1.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy1);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        sizePolicy1.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy1);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_0, 4, 1, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        sizePolicy1.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy1);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        sizePolicy1.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy1);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Button_sign = new QPushButton(centralwidget);
        Button_sign->setObjectName("Button_sign");
        sizePolicy1.setHeightForWidth(Button_sign->sizePolicy().hasHeightForWidth());
        Button_sign->setSizePolicy(sizePolicy1);
        Button_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_sign, 4, 2, 1, 1);

        Button_Multiplication = new QPushButton(centralwidget);
        Button_Multiplication->setObjectName("Button_Multiplication");
        sizePolicy1.setHeightForWidth(Button_Multiplication->sizePolicy().hasHeightForWidth());
        Button_Multiplication->setSizePolicy(sizePolicy1);
        Button_Multiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Multiplication, 2, 3, 1, 1);

        Errase_Memory = new QPushButton(centralwidget);
        Errase_Memory->setObjectName("Errase_Memory");
        sizePolicy1.setHeightForWidth(Errase_Memory->sizePolicy().hasHeightForWidth());
        Errase_Memory->setSizePolicy(sizePolicy1);
        Errase_Memory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Errase_Memory, 2, 4, 1, 1);

        Button_Add = new QPushButton(centralwidget);
        Button_Add->setObjectName("Button_Add");
        sizePolicy1.setHeightForWidth(Button_Add->sizePolicy().hasHeightForWidth());
        Button_Add->setSizePolicy(sizePolicy1);
        Button_Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Add, 3, 3, 1, 1);

        Button_Subtraction = new QPushButton(centralwidget);
        Button_Subtraction->setObjectName("Button_Subtraction");
        sizePolicy1.setHeightForWidth(Button_Subtraction->sizePolicy().hasHeightForWidth());
        Button_Subtraction->setSizePolicy(sizePolicy1);
        Button_Subtraction->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Subtraction, 4, 3, 1, 1);

        Retrieve_Memory = new QPushButton(centralwidget);
        Retrieve_Memory->setObjectName("Retrieve_Memory");
        sizePolicy1.setHeightForWidth(Retrieve_Memory->sizePolicy().hasHeightForWidth());
        Retrieve_Memory->setSizePolicy(sizePolicy1);
        Retrieve_Memory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Retrieve_Memory, 3, 4, 1, 1);

        Button_Equals = new QPushButton(centralwidget);
        Button_Equals->setObjectName("Button_Equals");
        sizePolicy1.setHeightForWidth(Button_Equals->sizePolicy().hasHeightForWidth());
        Button_Equals->setSizePolicy(sizePolicy1);
        Button_Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QPushButton: pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_Equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"	background-color:  gray;\n"
"	border: 1px solid gray; \n"
"	colorr: #ffffff;\n"
"}\n"
""));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button_Add_Memory->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button_Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_Division->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button_sign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button_Multiplication->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Errase_Memory->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button_Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button_Subtraction->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Retrieve_Memory->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button_Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
