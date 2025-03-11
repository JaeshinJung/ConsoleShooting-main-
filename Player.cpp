#include "include.h"

Player::Player()
{
	isAlive = true;
	x = 60;
	y = 15;
	body = 'A';
}

Player::~Player()
{
}

void Player::Update()
{
	Move();
	Clipping();
	if (GetAsyncKeyState(VK_SPACE)) {
		((GameState*)GameMng::getIns()->stateCtrl.m_pCurState)->CreateBullet(x,y);
	}
}


void Player::Move()
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
		y--;

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		x--;

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		y++;

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
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
