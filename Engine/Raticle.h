#pragma once
#include "Graphics.h"
#include "Vec2.h"
class Raticle {
public:
	Raticle(Vec2& position);
	void clamp();
	void clampX();
	void clampY();
	void drawCrossRaticle(Graphics& gfx);
	void drawSquaredRaticle(Graphics& gfx);
	void update(Vec2& speed);
	float getSize() const;
	bool getShape() const;
	void shiftRaticle(bool flag);
	Vec2 getPosition() const;
private:
	Vec2 position;
	float size = 6;
	int r = 255;
	int g = 0;
	int b = 0;
	bool shape = false;
};