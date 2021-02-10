#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Raticle {
public:
	Raticle(float x, float y);
	void clamp();
	void clampX();
	void clampY();
	void drawCrossRaticle(Graphics& gfx);
	void drawSquaredRaticle(Graphics& gfx);
	void update(Keyboard& kbd);
	float getX() const;
	float getY() const;
	float getSize() const;
	bool getShape() const;
	void shiftRaticle(bool flag);
	void setX(float x);
	void setY(float y);

private:
	float x = Graphics::ScreenWidth / 2;
	float y = Graphics::ScreenHeight / 2;
	float size = 6;
	int r = 255;
	int g = 0;
	int b = 0;
	bool shape = false;
};