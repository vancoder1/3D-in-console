#pragma once
#include "Vectors.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector2::Vector2()
{
	x = 0;
	y = 0;
}

Vector2::Vector2(float xparam, float yparam)
{
	x = xparam;
	y = yparam;
}

Vector2 Vector2::operator+(Vector2 second)
{
	return Vector2(x + second.x, y + second.y);
}

Vector2 Vector2::operator-(Vector2 second)
{
	return Vector2(x - second.x, y - second.y);
}
