#include "include.h"

Bullet::Bullet()
{
	body = '|';
	fColor = GREEN;
}

Bullet::~Bullet()
{
}

void Bullet::Move()
{
	y--;
}

void Bullet::Clipping()
{
	if (y < 0)
		Disable();
}
