#pragma once
#include "Graphics.h"
class Face {
public:
	void init(float x, float y, float vx, float vy);
	void move(float deltaTime);
	void draw(Graphics& gfx) const;
	static constexpr int screenWidth = Graphics::ScreenWidth;
	static constexpr int screenHeight = Graphics::ScreenHeight;
	bool isAlive();
	float getX() const;
	float getY() const;
	float getVX() const;
	float getVY() const;
	static float getSize();
	void setAlive(bool flag);
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float size = 23.0f;
	bool alive = false;

	void clampX();
	void clampY();
};
