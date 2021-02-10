#include "Graphics.h"
#include "Raticle.h"
#include "Keyboard.h"

void Raticle::update(Keyboard& kbd) {
	if (kbd.KeyIsPressed(VK_UP)) {
		y -= 3;
	}

	if (kbd.KeyIsPressed(VK_DOWN)) {
		y += 3;
	}

	if (kbd.KeyIsPressed(VK_RIGHT)) {
		x += 3;
	}

	if (kbd.KeyIsPressed(VK_LEFT)) {
		x -= 3;
	}
}

float Raticle::getX() const{
	return x;
}
float Raticle::getY() const{
	return y;
}
float Raticle::getSize() const{
	return size;
}

void Raticle::shiftRaticle(bool flag) {
	shape = flag;
}

void Raticle::setX(float in_x) {
	x = in_x;
}

void Raticle::setY(float in_y) {
	y = in_y;
}
bool Raticle::getShape() const{
	return shape;
}

Raticle::Raticle(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

void Raticle::clamp() {
	clampX();
	clampY();
}

void Raticle::clampX()
{
	if (x - size <= 0) {
		x = size;
	}
	else if (x + size >= Graphics::ScreenWidth) {
		x = Graphics::ScreenWidth - size;
	}
}

void Raticle::clampY()
{
	if (y - size <= 0) {
		y = size;
	}
	else if (y + size >= Graphics::ScreenHeight) {
		y = Graphics::ScreenHeight - size;
	}
}

void Raticle::drawCrossRaticle(Graphics& gfx) {
	const int subX = (int)x;
	const int subY = (int)y;
	//Left
	gfx.PutPixel(subX - 2, subY, r, g, b);
	gfx.PutPixel(subX - 3, subY, r, g, b);
	gfx.PutPixel(subX - 4, subY, r, g, b);
	gfx.PutPixel(subX - 5, subY, r, g, b);
	//Right
	gfx.PutPixel(subX + 2, subY, r, g, b);
	gfx.PutPixel(subX + 3, subY, r, g, b);
	gfx.PutPixel(subX + 4, subY, r, g, b);
	gfx.PutPixel(subX + 5, subY, r, g, b);
	//Upper
	gfx.PutPixel(subX, subY - 2, r, g, b);
	gfx.PutPixel(subX, subY - 3, r, g, b);
	gfx.PutPixel(subX, subY - 4, r, g, b);
	gfx.PutPixel(subX, subY - 5, r, g, b);
	//Bottom
	gfx.PutPixel(subX, subY + 2, r, g, b);
	gfx.PutPixel(subX, subY + 3, r, g, b);
	gfx.PutPixel(subX, subY + 4, r, g, b);
	gfx.PutPixel(subX, subY + 5, r, g, b);
}

void Raticle::drawSquaredRaticle(Graphics& gfx)
{
	const int subX = (int)x;
	const int subY = (int)y;
	//Upper-Left
	gfx.PutPixel(subX - 5, subY - 5, r, g, b);
	gfx.PutPixel(subX - 5, subY - 4, r, g, b);
	gfx.PutPixel(subX - 5, subY - 3, r, g, b);
	gfx.PutPixel(subX - 4, subY - 5, r, g, b);
	gfx.PutPixel(subX - 3, subY - 5, r, g, b);
	//Upper-Right
	gfx.PutPixel(subX + 5, subY - 5, r, g, b);
	gfx.PutPixel(subX + 5, subY - 4, r, g, b);
	gfx.PutPixel(subX + 5, subY - 3, r, g, b);
	gfx.PutPixel(subX + 4, subY - 5, r, g, b);
	gfx.PutPixel(subX + 3, subY - 5, r, g, b);
	//Bottom-Left
	gfx.PutPixel(subX - 5, subY + 5, r, g, b);
	gfx.PutPixel(subX - 4, subY + 5, r, g, b);
	gfx.PutPixel(subX - 3, subY + 5, r, g, b);
	gfx.PutPixel(subX - 5, subY + 4, r, g, b);
	gfx.PutPixel(subX - 5, subY + 3, r, g, b);
	//Bottom-Right
	gfx.PutPixel(subX + 5, subY + 5, r, g, b);
	gfx.PutPixel(subX + 4, subY + 5, r, g, b);
	gfx.PutPixel(subX + 3, subY + 5, r, g, b);
	gfx.PutPixel(subX + 5, subY + 3, r, g, b);
	gfx.PutPixel(subX + 5, subY + 4, r, g, b);
}