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

int Raticle::getX() const{
	return x;
}
int Raticle::getY() const{
	return y;
}
int Raticle::getSize() const{
	return size;
}

void Raticle::shiftRaticle(bool flag) {
	shape = flag;
}

void Raticle::setX(int in_x) {
	x = in_x;
}

void Raticle::setY(int in_y) {
	y = in_y;
}
bool Raticle::getShape() const{
	return shape;
}

Raticle::Raticle(int in_x, int in_y)
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
	//Left
	gfx.PutPixel(x - 2, y, r, g, b);
	gfx.PutPixel(x - 3, y, r, g, b);
	gfx.PutPixel(x - 4, y, r, g, b);
	gfx.PutPixel(x - 5, y, r, g, b);
	//Right
	gfx.PutPixel(x + 2, y, r, g, b);
	gfx.PutPixel(x + 3, y, r, g, b);
	gfx.PutPixel(x + 4, y, r, g, b);
	gfx.PutPixel(x + 5, y, r, g, b);
	//Upper
	gfx.PutPixel(x, y - 2, r, g, b);
	gfx.PutPixel(x, y - 3, r, g, b);
	gfx.PutPixel(x, y - 4, r, g, b);
	gfx.PutPixel(x, y - 5, r, g, b);
	//Bottom
	gfx.PutPixel(x, y + 2, r, g, b);
	gfx.PutPixel(x, y + 3, r, g, b);
	gfx.PutPixel(x, y + 4, r, g, b);
	gfx.PutPixel(x, y + 5, r, g, b);
}

void Raticle::drawSquaredRaticle(Graphics& gfx)
{
	//Upper-Left
	gfx.PutPixel(x - 5, y - 5, r, g, b);
	gfx.PutPixel(x - 5, y - 4, r, g, b);
	gfx.PutPixel(x - 5, y - 3, r, g, b);
	gfx.PutPixel(x - 4, y - 5, r, g, b);
	gfx.PutPixel(x - 3, y - 5, r, g, b);
	//Upper-Right
	gfx.PutPixel(x + 5, y - 5, r, g, b);
	gfx.PutPixel(x + 5, y - 4, r, g, b);
	gfx.PutPixel(x + 5, y - 3, r, g, b);
	gfx.PutPixel(x + 4, y - 5, r, g, b);
	gfx.PutPixel(x + 3, y - 5, r, g, b);
	//Bottom-Left
	gfx.PutPixel(x - 5, y + 5, r, g, b);
	gfx.PutPixel(x - 4, y + 5, r, g, b);
	gfx.PutPixel(x - 3, y + 5, r, g, b);
	gfx.PutPixel(x - 5, y + 4, r, g, b);
	gfx.PutPixel(x - 5, y + 3, r, g, b);
	//Bottom-Right
	gfx.PutPixel(x + 5, y + 5, r, g, b);
	gfx.PutPixel(x + 4, y + 5, r, g, b);
	gfx.PutPixel(x + 3, y + 5, r, g, b);
	gfx.PutPixel(x + 5, y + 3, r, g, b);
	gfx.PutPixel(x + 5, y + 4, r, g, b);
}