#include <iostream>
#include <cmath>
#include <cstdio>
#include <Windows.h>
#include "Vectors.h"
using namespace std;

void SetWindow(int Width, int Height)
{
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;
    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;
    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(Handle, coord);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);
}

int main()
{
    int width = 120;
    int height = 30;
    
    SetWindow(width, height);

    wchar_t* screen = new wchar_t[width * height + 1];
    screen[width * height] = '\0';
    float koef = (float)width / height;
    float pixelKoef = 11.0f / 24.0f;
    char gradient[] = " .:!/r(l1Z4H9W9$@";
    int gradientSize = std::size(gradient) - 2;

    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    for (int frame = 0; frame < 10000; frame++)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;

                x *= koef * pixelKoef;
                x += cos(frame * 0.001);
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
        WriteConsoleOutputCharacter(hConsole, screen, width * height, { 0, 0 }, &dwBytesWritten);
    }
}