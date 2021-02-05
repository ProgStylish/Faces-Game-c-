#include "Square.h"
#include "Graphics.h"

Square::Square(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Square::reSpawn(int in_x, int in_y) {
	x = in_x;
	y = in_y;
}

void Square::draw(Graphics& gfx) const {
	for (int j = y; j < y + size; j++)
	{
		for (int i = x; i < x + size; i++)
		{
			gfx.PutPixel(i, j, 255, g, b);
		}
	}
}

void Square::shiftBackground() {
	if (g == 255 || g == 0) {
		vgb *= -1;
	}
	g += vgb;
	b += vgb;
}

int Square::getX() const
{
	return x;
}

int Square::getY() const
{
	return y;
}

int Square::getSize() const
{
	return size;
}
