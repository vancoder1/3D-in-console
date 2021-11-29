#pragma once

class Vector2
{
private:
	float x;
	float y;
public:
	Vector2();
	Vector2(float xparam, float yparam);

	Vector2 operator+(Vector2 second);
	Vector2 operator-(Vector2 second);
};

