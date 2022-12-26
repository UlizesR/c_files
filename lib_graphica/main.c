#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "graphy.c"

#define WIDTH 800
#define HEIGHT 600

#define COLS 160
#define ROWS 120
#define CELL_WIDTH 5
#define CELL_HEIGHT 5

#define BACKGROUND_COLOR 0xFF202020
#define FOREGROUND_COLOR 0xFF0000FF

static u_int32_t pixels[WIDTH * HEIGHT];

int aliveProbability = 60;
int generations = 10;
int ALIVE = 1;
int DEAD = 0;
int map[ROWS][COLS];

bool checker_pattern(void)
{
    graphy_fill(pixels, WIDTH, HEIGHT, BACKGROUND_COLOR);
    

    for (int y = 0; y < ROWS; y++) 
    {
        for (int x = 0; x < COLS; x++)
        {
            u_int32_t color = BACKGROUND_COLOR;
            if ((x + y) % 2 == 0) {
                color = FOREGROUND_COLOR;
            } 
            graphy_fill_rect(pixels, WIDTH, HEIGHT, color, x * CELL_WIDTH, y * CELL_HEIGHT, CELL_WIDTH, CELL_HEIGHT);
        }
    }
    const char *file_path = "output_images/checker_pattern.ppm";
    Errno err = graphy_ppm_file(pixels, WIDTH, HEIGHT, file_path);
    if (err) 
    {
        fprintf(stderr, "Error: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}

float lerpf(float a, float b, float t)
{
    return a + (b - a) * t;
}

bool circle_pattern(void)
{
    graphy_fill(pixels, WIDTH, HEIGHT, BACKGROUND_COLOR);

    for (int y = 0; y < ROWS; y++) 
    {
        for (int x = 0; x < COLS; x++)
        {
            float u = (float) x / COLS;
            float v = (float) y / ROWS;
            float t = (u + v) / 2;

            size_t radius = CELL_WIDTH;
            float r = lerpf(radius/8, radius/2, t);
            if (CELL_HEIGHT < radius) radius = CELL_HEIGHT;
            graphy_fill_circle(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, x * CELL_WIDTH + CELL_WIDTH / 2, y * CELL_HEIGHT + CELL_HEIGHT / 2, (size_t) r);
        }
    }


    const char *file_path = "output_images/circle_pattern.ppm";
    Errno err = graphy_ppm_file(pixels, WIDTH, HEIGHT, file_path);
    if (err) 
    {
        fprintf(stderr, "Error: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}

bool draw_line(void)
{
    graphy_fill(pixels, WIDTH, HEIGHT, BACKGROUND_COLOR);

    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, 0, 0, WIDTH, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, WIDTH, 0, 0, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, 0, 0, WIDTH/4, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, WIDTH/4, 0, 0, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, WIDTH, 0, WIDTH/4*3, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, WIDTH/4*3, 0, WIDTH, HEIGHT);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, 0, HEIGHT / 2, WIDTH, HEIGHT / 2);
    graphy_fill_line(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, WIDTH / 2, 0, WIDTH / 2, HEIGHT);

    const char *file_path = "output_images/line.ppm";
    Errno err = graphy_ppm_file(pixels, WIDTH, HEIGHT, file_path);
    if (err) 
    {
        fprintf(stderr, "Error: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}


void gen_map()
{
    time_t seed;
    seed = time(NULL);
    srand(seed);
    for (int w = 0; w < ROWS; w++)
    {
        for (int h = 0; h < COLS; h++)
        {
            map[w][h] = ALIVE;
            if (rand() % 100 > aliveProbability) map[w][h] = DEAD;
        }
    }
}

int near(int x, int y)
{
    int count = 0;
    for (int w = x - 1; w < 2 + x  ; w++)
    {
        for (int h = y - 1; h < 2 + y; h++)
        {
            if (!(h == y && w == x))
            {
                count += map[w][h];
            } 
        }
    }
    return count;
}

bool Procedural_Generator(void)
{
    graphy_fill(pixels, WIDTH, HEIGHT, BACKGROUND_COLOR);

    for (int w = 1; w < ROWS - 1; w++)
    {
        for (int h = 1; h < COLS - 1; h++)
        {
            
            if (map[w][h])
            {
                graphy_fill_rect(pixels, WIDTH, HEIGHT, FOREGROUND_COLOR, h * CELL_WIDTH, w * CELL_HEIGHT, CELL_WIDTH, CELL_HEIGHT);
            } else {
                graphy_fill_rect(pixels, WIDTH, HEIGHT, BACKGROUND_COLOR, h * CELL_WIDTH, w * CELL_HEIGHT, CELL_WIDTH, CELL_HEIGHT);
            }
        }
    }

    const char *file_path = "output_images/PG_imgs/pg2.ppm";
    Errno err = graphy_ppm_file(pixels, WIDTH, HEIGHT, file_path);
    if (err) 
    {
        fprintf(stderr, "Error: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}


int main() 
{
    gen_map();
    for (int gen = 0; gen < generations; gen++)
    {
        for (int w = 1; w < ROWS - 1; w++)
        {
            for (int h = 1; h < COLS - 1; h++)
            {
                int count = near(w, h);
                if (map[w][h] == DEAD && count >= 6) map[w][h] = ALIVE;
                if (map[w][h] == ALIVE && count <= 3) map[w][h] = DEAD;
            }
        }
    }
    if (!Procedural_Generator()) return 1;
    return 0;
}