#include <iostream>
#include <string>
#include <cmath>
#include "Vectors.h"
using namespace std;

int main()
{
    int width = 120;
    int height = 30;
    
    char* screen = new char[width * height + 1];
    screen[width * height] = '\0';
    float koef = (float)width / height;
    float pixelKoef = 11.0f / 24.0f;
    char gradient[] = " .:!/r(l1Z4H9W9$@";
    int gradientSize = std::size(gradient) - 2;

    for (int frame = 0; frame < 10000; frame++)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;

                x *= koef * pixelKoef;
                x += sin(frame * 0.005);
                char pixel = ' ';

                float dist = sqrt(x * x + y * y);
                int color = (int)(1.0f / dist);
                if (color < 0)
                {
                    color = 0;
                }
                else if (color > gradientSize)
                {
                    color = gradientSize;
                }
                pixel = gradient[color];
                screen[i + j * width] = pixel;
            }
        }
        printf(screen);
    }
}