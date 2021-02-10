#pragma once
#include "Graphics.h"
class Square {
public:
	Square(float x, float y);
	void reSpawn(float x, float y);
	float getX() const;
	float getY() const;
	float getSize() const;
	void draw(Graphics& gfx) const;
	void shiftBackground();
private:
	float x;
	float y;
	int vgb = -1;
	int g = 0;
	int b = 0;
	static float constexpr size = 30;
};