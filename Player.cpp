#include "include.h"

Player::Player()
{
	x = 60;
	y = 15;
	body = 'A';
	fColor = WHITE;
	bColor = BLACK;
}

Player::~Player()
{
}

void Player::Update()
{
	Move();
	Clipping();
}

void Player::Draw()
{
	DrawChar(x, y, body, fColor, bColor);
}

void Player::Move()
{
	if (GetAsyncKeyState('W') & 0x8000)
		y--;

	if (GetAsyncKeyState('A') & 0x8000)
		x--;

	if (GetAsyncKeyState('S') & 0x8000)
		y++;

	if (GetAsyncKeyState('D') & 0x8000)
		x++;
}

void Player::Clipping()
{
	if (x > 119) {
		x = 119;
	}
	else if (x < 0) {
		x = 0;
	}

	if (y > 29) {
		y = 29;
	}
	else if (y < 0) {
		y = 0;
	}
}
