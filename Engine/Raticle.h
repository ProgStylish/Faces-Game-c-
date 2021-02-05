#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Raticle {
public:
	Raticle(int x, int y);
	void clamp();
	void clampX();
	void clampY();
	void drawCrossRaticle(Graphics& gfx);
	void drawSquaredRaticle(Graphics& gfx);
	void update(Keyboard& kbd);
	int getX() const;
	int getY() const;
	int getSize() const;
	bool getShape() const;
	void shiftRaticle(bool flag);
	void setX(int x);
	void setY(int y);

private:
	int x = Graphics::ScreenWidth / 2;
	int y = Graphics::ScreenHeight / 2;
	int size = 6;
	int r = 255;
	int g = 0;
	int b = 0;
	bool shape = false;
};