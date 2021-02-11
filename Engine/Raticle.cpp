#include "Graphics.h"
#include "Raticle.h"

void Raticle::update(Vec2& speed) {
	position -= (position - speed).getNormalized() * 2;
}

float Raticle::getSize() const{
	return size;
}

void Raticle::shiftRaticle(bool flag) {
	shape = flag;
}

Vec2 Raticle::getPosition() const
{
	return position;
}

bool Raticle::getShape() const{
	return shape;
}

Raticle::Raticle(Vec2& in_position)
{
	position = in_position;
}

void Raticle::clamp() {
	clampX();
	clampY();
}

void Raticle::clampX()
{
	if (position.x - size <= 0) {
		position.x = size;
	}
	else if (position.x + size >= Graphics::ScreenWidth) {
		position.x = Graphics::ScreenWidth - size;
	}
}

void Raticle::clampY()
{
	if (position.y - size <= 0) {
		position.y = size;
	}
	else if (position.y + size >= Graphics::ScreenHeight) {
		position.y = Graphics::ScreenHeight - size;
	}
}

void Raticle::drawCrossRaticle(Graphics& gfx) {
	const int subX = (int)position.x;
	const int subY = (int)position.y;
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
	const int subX = (int)position.x;
	const int subY = (int)position.y;
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