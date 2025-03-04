#include "include.h"
int createEnemyTime = GetTickCount64();

GameMng::GameMng()
{
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	player.Update();
	for (int i = 0; i < D_BULLET_MAX; i++) {
		bullets[i].Update();
	}
	for (int i = 0; i < D_ENEMY_MAX; i++) {
		enemys[i].Update();
	}
	for (int i = 0; i < D_EFFECT_MAX; i++) {
		effects[i].Update();
	}

	if (createEnemyTime < GetTickCount64()) {
		createEnemyTime = GetTickCount64() + 200;
		CreateEnemy(rand() % 120, 0);
	}
	EnemyBulletCollision();
}

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0; i < D_BULLET_MAX; i++) {
		bullets[i].Draw();
	}
	for (int i = 0; i < D_ENEMY_MAX; i++) {
		enemys[i].Draw();
	}
	for (int i = 0; i < D_EFFECT_MAX; i++) {
		effects[i].Draw();
	}
}

void GameMng::EnemyBulletCollision()
{
	for (int i = 0; i < D_BULLET_MAX; i++) {
		if (bullets[i].isAlive) {
			for (int j = 0; j < D_ENEMY_MAX; j++) {
				if (enemys[j].isAlive &&
					bullets[i].x == enemys[j].x &&
					(bullets[i].y == enemys[j].y || bullets[i].y - 1 == enemys[j].y)) {
					bullets[i].Disable();
					enemys[j].Disable();
					CreateEffect(enemys[j].x, enemys[j].y);
					break;
				}
			}
		}
	}
}

void GameMng::CreateBullet(int x, int y)
{
	for (int i = 0; i < D_BULLET_MAX; i++) {
		if (!bullets[i].isAlive) {
			bullets[i].Enable(x, y);
			break;
		}
	}
}

void GameMng::CreateEnemy(int x, int y) {
	for (int i = 0; i < D_ENEMY_MAX; i++) {
		if (!enemys[i].isAlive) {
			enemys[i].Enable(x, y);
			break;
		}
	}
}

void GameMng::CreateEffect(int x, int y)
{
	for (int i = 0; i < D_EFFECT_MAX; i++) {
		if (!effects[i].isAlive) {
			effects[i].Enable(x, y);
			break;
		}
	}
}


