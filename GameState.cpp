#include "include.h"

GameState::GameState()
{
	createEnemyTime = 0;
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2)) {
		GameMng::getIns()->stateCtrl.StateChange(new MenuState);
	}
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
	text.Update();

	if (createEnemyTime < GetTickCount64()) {
		createEnemyTime = GetTickCount64() + 200;
		CreateEnemy(rand() % 120, 0);
	}
	EnemyBulletCollision();
}

void GameState::Draw()
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
	text.Draw();
}

void GameState::Exit()
{
}

void GameState::EnemyBulletCollision()
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
					score++;
					break;
				}
			}
		}
	}

}

void GameState::CreateBullet(int x, int y)
{
	for (int i = 0; i < D_BULLET_MAX; i++) {
		if (!bullets[i].isAlive) {
			bullets[i].Enable(x, y);
			break;
		}
	}
}

void GameState::CreateEnemy(int x, int y)
{
	for (int i = 0; i < D_ENEMY_MAX; i++) {
		if (!enemys[i].isAlive) {
			enemys[i].Enable(x, y);
			break;
		}
	}
}

void GameState::CreateEffect(int x, int y)
{
	for (int i = 0; i < D_EFFECT_MAX; i++) {
		if (!effects[i].isAlive) {
			effects[i].Enable(x, y);
			break;
		}
	}
}
