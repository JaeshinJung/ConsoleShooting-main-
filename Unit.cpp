#include "include.h"

Unit::Unit()
{
	isAlive = false;
	x = 0;
	y = 0;
	fColor = WHITE;
	bColor = BLACK;
	body = ' ';
}

Unit::~Unit()
{
}

void Unit::Update()
{
	if (isAlive){
		Move();
		Clipping();
	}
}

void Unit::Draw()
{
	if (isAlive) {
		DrawChar(x, y, body, fColor, bColor);
	}
}

void Unit::Move()
{
	y += 1;
}

void Unit::Clipping()
{
	if (y < 0) {
		Disable();
	}
}

void Unit::Enable(int x, int y)
{
	isAlive = true;
	this->x = x;
	this->y = y;
}

void Unit::Disable()
{
	isAlive = false;
}
