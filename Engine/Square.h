#pragma once
#include "Graphics.h"
class Square {
public:
	Square(int x, int y);
	void reSpawn(int x, int y);
	int getX() const;
	int getY() const;
	int getSize() const;
	void draw(Graphics& gfx) const;
	void shiftBackground();
private:
	int x = 0;
	int y = 0;
	int vgb = -1;
	int g = 0;
	int b = 0;
	static int constexpr size = 30;
};