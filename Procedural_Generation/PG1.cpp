#include <iostream>

#define MAP_WIDTH 150
#define MAP_HEIGHT 60  

int ALIVE = 1;
int DEAD = 0;

int map[MAP_HEIGHT][MAP_WIDTH];

int seed = time(NULL);
int aliveProbability = 60;
int generations = 10;

void gen_map()
{
    srand(seed);
    for (int h = 0; h < MAP_HEIGHT; h++)
    {
        for (int w = 0; w < MAP_WIDTH; w++)
        {
            map[h][w] = ALIVE;
            if (rand() % 100 > aliveProbability) map[h][w] = DEAD;
        }
    }
}

int near(int x, int y)
{
    int count = 0;
    for (int h = y - 1; h < 2 + y; h++)
    {
        for (int w = x - 1; w < 2 + x  ; w++)
        {
            if (!(h == y && w == x))
            {
                count += map[h][w];
                // std::cout << map[h][w];
            } else {
                // std::cout << ".";
            }
        }
        // std::cout << std::endl;
    }
    // std::cout << count << std::endl;
    return count;
}

void  display_map()
{
    for (int h = 1; h < MAP_HEIGHT - 1; h++)
    {
        for (int w = 1; w < MAP_WIDTH - 1; w++)
        {
           if (map[h][w])
           {
            std::cout << "#";
           } else {
            std::cout << ".";
           }
        }
        std::cout << std::endl;
    }
}

int main()
{
    gen_map();
    for (int gen = 0; gen < generations; gen++)
    {
        for (int h = 1; h < MAP_HEIGHT - 1; h++)
        {
            for (int w = 1; w < MAP_WIDTH - 1; w++)
            {
                int count = near(w, h);
                if (map[h][w] == DEAD && count >= 6) map[h][w] = ALIVE;
                if (map[h][w] == ALIVE && count <= 3) map[h][w] = DEAD;
            }
        }
    }

    display_map();
    return 0;
}