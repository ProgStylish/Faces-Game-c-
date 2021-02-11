#pragma once
#include "Graphics.h"
#include "Vec2.h"
class Face {
public:
	void init(Vec2& position, Vec2& speed);
	void move(float deltaTime);
	void draw(Graphics& gfx) const;
	static constexpr float screenWidth = Graphics::ScreenWidth;
	static constexpr float screenHeight = Graphics::ScreenHeight;
	bool isAlive();
	Vec2 getPosition() const;
	Vec2 getSpeed() const;
	static float getSize();
	void setAlive(bool flag);
private:
	Vec2 position;
	Vec2 speed;
	static constexpr float size = 21.0f;
	bool alive = false;
	void clampX();
	void clampY();
};
