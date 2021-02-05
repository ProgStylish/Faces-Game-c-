#pragma once
#include "Graphics.h"
class Face {
public:
	Face(int x, int y, int vx, int vy);
	void move();
	void draw(Graphics& gfx) const;
	static constexpr int screenWidth = Graphics::ScreenWidth;
	static constexpr int screenHeight = Graphics::ScreenHeight;
	bool isAlive();
	int getX() const;
	int getY() const;
	int getVX() const;
	int getVY() const;
	static int getSize();
	void setAlive(bool flag);
private:
	int x = 0;
	int y = 0;
	int vx = 2;
	int vy = 2;
	static const int size = 23;
	bool alive = false;

	void clampX();
	void clampY();
};
