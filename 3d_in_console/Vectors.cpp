#pragma once
#include "Vectors.h"
#include <iostream>
#include <cmath>
using namespace std;

/* VECTOR 2D */
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

Vector2 Vector2::operator+(Vector2 const& second)
{
	return Vector2(x + second.x, y + second.y);
}

Vector2 Vector2::operator-(Vector2 const& second)
{
	return Vector2(x - second.x, y - second.y);
}

Vector2 Vector2::operator*(Vector2 const& second)
{
	return Vector2(x * second.x, y * second.y);
}

Vector2 Vector2::operator/(Vector2 const& second)
{
	return Vector2(x / second.x, y / second.y);
}


/* VECTOR 3D */

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float xparam, float yparam, float zparam)
{
	x = xparam;
	y = yparam;
	z = zparam;
}

Vector3 Vector3::operator+(Vector3 const& second)
{
	return Vector3(x + second.x, y + second.y, z + second.z);
}

Vector3 Vector3::operator-(Vector3 const& second)
{
	return Vector3(x - second.x, y - second.y, z - second.z);
}

Vector3 Vector3::operator*(Vector3 const& second)
{
	return Vector3(x * second.x, y * second.y, z * second.z);
}

Vector3 Vector3::operator/(Vector3 const& second)
{
	return Vector3(x / second.x, y / second.y, z / second.z);
}