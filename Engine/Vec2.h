#pragma once

class Vec2 {
public:
	Vec2() = default;
	Vec2(float x, float y);
	Vec2 operator + (const Vec2& vector) const;
	Vec2& operator += (const Vec2& vector);
	Vec2 operator - (const Vec2& vector) const;
	Vec2& operator -= (const Vec2& vector);
	Vec2 operator * (float scalar) const;
	Vec2& operator *= (float scalar);
	Vec2& normalize();
	Vec2 getNormalized();
	float getLength();
	float getLengthSqrd();
	float getX();
	float getY();
public:
	float x;
	float y;
};