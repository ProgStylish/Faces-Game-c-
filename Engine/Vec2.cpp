#include "Vec2.h"
#include <cmath>

Vec2::Vec2(float in_x, float in_y)
	  :
	x(in_x),
	y(in_y)
{
}

Vec2 Vec2::operator+(const Vec2& vector) const
{
	return Vec2(x + vector.x, y + vector.y);
}

Vec2& Vec2::operator += (const Vec2& vector)
{
	return  *this = *this + vector;
}

Vec2 Vec2::operator-(const Vec2& vector) const
{
	return Vec2(x - vector.x, y - vector.y);
}

Vec2& Vec2::operator-=(const Vec2& vector)
{
	return *this = *this - vector;
}

Vec2 Vec2::operator*(float scalar) const
{
	return Vec2(x*scalar, y*scalar);
}

Vec2& Vec2::operator*=(float scalar)
{
	return *this = *this * scalar;
}

Vec2& Vec2::normalize()
{
	return *this = getNormalized();
}

Vec2 Vec2::getNormalized()
{
	return *this * (1.0f/getLength());
}

float Vec2::getLength()
{
	return sqrt(getLengthSqrd());
}

float Vec2::getLengthSqrd()
{
	return x * x + y * y;
}

float Vec2::getX()
{
	return x;
}

float Vec2::getY()
{
	return y;
}
