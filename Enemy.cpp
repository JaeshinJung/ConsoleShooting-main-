#include "include.h"

Enemy::Enemy()
{
	fColor = RED;
	bColor = RED;
}

Enemy::~Enemy()
{
}

void Enemy::Move()
{
	y += 1;
}

void Enemy::Clipping()
{
	if (y > 29) {
		Disable();
	}
}

