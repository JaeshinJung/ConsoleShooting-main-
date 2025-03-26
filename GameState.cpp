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

	player.Update();
	//for (int i = 0;i < bullets.size();i++)
	//	bullets[i]->Update();
	//for (int i = 0;i < enemys.size();i++)
	//	enemys[i]->Update();
	//for (int i = 0;i < effects.size();i++)
	//	effects[i]->Update();

	for (int i = 0;i < gameobjects.size();i++)
		gameobjects[i]->Update();

	if (createEnemyTime < GetTickCount())
	{
		createEnemyTime = GetTickCount() + 100;
		CreateObject(ID::ENEMY, rand() % 120, 0);
	}
	EnemyBulletCollision();

	if (GetAsyncKeyState(VK_F2))
	{
		GameMng::GetIns()->stateCtrl.StateChange(new MenuState);
	}
}

void GameState::Draw()
{
	player.Draw();
	//for (int i = 0;i < bullets.size();i++)
	//	bullets[i]->Draw();
	//for (int i = 0;i < enemys.size();i++)
	//	enemys[i]->Draw();
	//for (int i = 0;i < effects.size();i++)
	//	effects[i]->Draw();

	for (int i = 0;i < gameobjects.size();i++)
		gameobjects[i]->Draw();

	text.Draw();
}

void GameState::Exit()
{
}

void GameState::EnemyBulletCollision()
{
	for (int i = 0;i < gameobjects.size();i++)
	{
		if (gameobjects[i]->isAlive && gameobjects[i]->id == ID::BULLET)
		{
			for (int j = 0;j < gameobjects.size();j++)
			{
				if (gameobjects[j]->isAlive && gameobjects[j]->id == ID::ENEMY
					&& gameobjects[i]->x == gameobjects[j]->x &&
					(gameobjects[i]->y == gameobjects[j]->y || gameobjects[i]->y - 1 == gameobjects[j]->y))
				{
					CreateObject(ID::EFFECT, gameobjects[j]->x, gameobjects[j]->y);
					gameobjects[i]->Disable();
					gameobjects[j]->Disable();
					break;
				}
			}
		}
	}
}

void GameState::CreateObject(ID id, int x, int y)
{
	if (id == ID::NONE)
		return;

	for (int i = 0;i < gameobjects.size();i++)
	{
		if (gameobjects[i]->id == id && gameobjects[i]->isAlive == false)
		{
			gameobjects[i]->Enable(x, y);
			return;
		}
	}

	Unit* unit = nullptr;
	switch (id)
	{
	case BULLET:
		unit = new Bullet();
		break;
	case ENEMY:
		unit = new Enemy();
		break;
	case EFFECT:
		unit = new Effect();
		break;
	}

	if (unit)
	{
		unit->Enable(x, y);
		gameobjects.push_back(unit);
	}

}
