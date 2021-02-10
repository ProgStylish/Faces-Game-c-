#include "Face.h"

void Face::init(float in_x, float in_y, float in_vx, float in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	alive = true;
}

void Face::move(float deltaTime)
{
	x += vx * deltaTime;
	clampX();
	y += vy * deltaTime;
	clampY();
}

void Face::clampX()
{
	if (x - 1 < 0) {
		x = 0;
		vx *= -1;
	}
	if (x + size > (float)screenWidth) {
		x = float(screenWidth - size - 1);
		vx *= -1;
	}
}

void Face::clampY()
{
	if (y - 1 <= 0) {
		y = 0;
		vy *= -1;
	}
	if (y + size >= (float)screenHeight) {
		y = float(screenHeight - size - 1);
		vy *= -1;
	}
}

bool Face::isAlive() {
	return alive;
}

float Face::getX() const
{
	return x;
}

float Face::getY() const
{
	return y;
}

float Face::getVX() const
{
	return vx;
}

float Face::getVY() const
{
	return vy;
}

void Face::setAlive(bool flag) {
	alive = flag;
}

float Face::getSize() {
	return size;
}

void Face::draw(Graphics& gfx) const
{
	const int subX = (int)x;
	const int subY = (int)y;
	gfx.PutPixel(7 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(8 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(9 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(10 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(12 + subX, 0 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 1 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 1 + subY, 0, 0, 0);
	gfx.PutPixel(7 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 1 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 1 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 1 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 2 + subY, 0, 0, 0);
	gfx.PutPixel(4 + subX, 2 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(14 + subX, 2 + subY, 254, 221, 88);
	gfx.PutPixel(15 + subX, 2 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 2 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 3 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(14 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(15 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 3 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 3 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 4 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(14 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(15 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 4 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 4 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(4 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(12 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(13 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 5 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 5 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 6 + subY, 255, 255, 255);
	gfx.PutPixel(4 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 6 + subY, 255, 255, 255);
	gfx.PutPixel(12 + subX, 6 + subY, 255, 255, 255);
	gfx.PutPixel(13 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 6 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 6 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 7 + subY, 255, 255, 255);
	gfx.PutPixel(3 + subX, 7 + subY, 255, 255, 255);
	gfx.PutPixel(4 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 7 + subY, 255, 255, 255);
	gfx.PutPixel(12 + subX, 7 + subY, 255, 255, 255);
	gfx.PutPixel(13 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 7 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 7 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(3 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(4 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(5 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(12 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(13 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(14 + subX, 8 + subY, 255, 255, 255);
	gfx.PutPixel(15 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 8 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 8 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(2 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(4 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(12 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(13 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 9 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 9 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 10 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(2 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(14 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(15 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 10 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 10 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 11 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(2 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(7 + subX, 11 + subY, 20, 14, 18);
	gfx.PutPixel(8 + subX, 11 + subY, 18, 11, 14);
	gfx.PutPixel(9 + subX, 11 + subY, 18, 12, 14);
	gfx.PutPixel(10 + subX, 11 + subY, 18, 12, 14);
	gfx.PutPixel(11 + subX, 11 + subY, 21, 13, 16);
	gfx.PutPixel(12 + subX, 11 + subY, 24, 11, 15);
	gfx.PutPixel(13 + subX, 11 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(15 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 11 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 11 + subY, 0, 0, 0);
	gfx.PutPixel(0 + subX, 12 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(2 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(6 + subX, 12 + subY, 23, 9, 23);
	gfx.PutPixel(7 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(8 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(9 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(10 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(11 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(12 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(13 + subX, 12 + subY, 135, 26, 68);
	gfx.PutPixel(14 + subX, 12 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(16 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 12 + subY, 254, 221, 88);
	gfx.PutPixel(19 + subX, 12 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 13 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 13 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 13 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 13 + subY, 254, 221, 88);
	gfx.PutPixel(5 + subX, 13 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(7 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(8 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(9 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(10 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(11 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(12 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(13 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(14 + subX, 13 + subY, 135, 26, 68);
	gfx.PutPixel(15 + subX, 13 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 13 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 13 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 13 + subY, 0, 0, 0);
	gfx.PutPixel(1 + subX, 14 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 14 + subY, 254, 221, 88);
	gfx.PutPixel(3 + subX, 14 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 14 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(6 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(7 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(8 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(9 + subX, 14 + subY, 251, 192, 224);
	gfx.PutPixel(10 + subX, 14 + subY, 251, 192, 224);
	gfx.PutPixel(11 + subX, 14 + subY, 251, 192, 224);
	gfx.PutPixel(12 + subX, 14 + subY, 251, 192, 224);
	gfx.PutPixel(13 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(14 + subX, 14 + subY, 135, 26, 68);
	gfx.PutPixel(15 + subX, 14 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 14 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 14 + subY, 254, 221, 88);
	gfx.PutPixel(18 + subX, 14 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 15 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 15 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 15 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 15 + subY, 135, 26, 68);
	gfx.PutPixel(6 + subX, 15 + subY, 135, 26, 68);
	gfx.PutPixel(7 + subX, 15 + subY, 135, 26, 68);
	gfx.PutPixel(8 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(9 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(10 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(11 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(12 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(13 + subX, 15 + subY, 251, 192, 224);
	gfx.PutPixel(14 + subX, 15 + subY, 135, 26, 68);
	gfx.PutPixel(15 + subX, 15 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 15 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 15 + subY, 0, 0, 0);
	gfx.PutPixel(2 + subX, 16 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 16 + subY, 254, 221, 88);
	gfx.PutPixel(4 + subX, 16 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 16 + subY, 135, 26, 68);
	gfx.PutPixel(6 + subX, 16 + subY, 135, 26, 68);
	gfx.PutPixel(7 + subX, 16 + subY, 135, 26, 68);
	gfx.PutPixel(8 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(9 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(10 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(11 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(12 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(13 + subX, 16 + subY, 251, 192, 224);
	gfx.PutPixel(14 + subX, 16 + subY, 135, 26, 68);
	gfx.PutPixel(15 + subX, 16 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 16 + subY, 254, 221, 88);
	gfx.PutPixel(17 + subX, 16 + subY, 0, 0, 0);
	gfx.PutPixel(3 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(4 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(7 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(8 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(9 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(10 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(12 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(13 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(15 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(16 + subX, 17 + subY, 0, 0, 0);
	gfx.PutPixel(5 + subX, 18 + subY, 0, 0, 0);
	gfx.PutPixel(6 + subX, 18 + subY, 0, 0, 0);
	gfx.PutPixel(7 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(8 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(9 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(10 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(11 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(12 + subX, 18 + subY, 254, 221, 88);
	gfx.PutPixel(13 + subX, 18 + subY, 0, 0, 0);
	gfx.PutPixel(14 + subX, 18 + subY, 0, 0, 0);
	gfx.PutPixel(7 + subX, 19 + subY, 0, 0, 0);
	gfx.PutPixel(8 + subX, 19 + subY, 0, 0, 0);
	gfx.PutPixel(9 + subX, 19 + subY, 0, 0, 0);
	gfx.PutPixel(10 + subX, 19 + subY, 0, 0, 0);
	gfx.PutPixel(11 + subX, 19 + subY, 0, 0, 0);
	gfx.PutPixel(12 + subX, 19 + subY, 0, 0, 0);
}
