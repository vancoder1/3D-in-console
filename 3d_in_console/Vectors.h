#pragma once

class Vector2
{
public:
	float x;
	float y;

	Vector2();
	Vector2(float xparam, float yparam);

	Vector2 operator+(Vector2 const& second);
	Vector2 operator-(Vector2 const& second);
	Vector2 operator*(Vector2 const& second);
	Vector2 operator/(Vector2 const& second);
};

class Vector3
{
public:
	float x;
	float y;
	float z;

	Vector3();
	Vector3(float xparam, float yparam, float zparam);

	Vector3 operator+(Vector3 const& second);
	Vector3 operator-(Vector3 const& second);
	Vector3 operator*(Vector3 const& second);
	Vector3 operator/(Vector3 const& second);
};