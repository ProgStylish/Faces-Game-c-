#include "Square.h"
#include "Graphics.h"

Square::Square(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

void Square::reSpawn(float in_x, float in_y) {
	x = in_x;
	y = in_y;
}

void Square::draw(Graphics& gfx) const {
	for (int j = (int)y; j < int(y + size); j++)
	{
		for (int i = (int)x; i < int(x + size); i++)
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

float Square::getX() const
{
	return x;
}

float Square::getY() const
{
	return y;
}

float Square::getSize() const
{
	return size;
}
