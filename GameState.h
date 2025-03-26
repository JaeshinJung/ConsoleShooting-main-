#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	Player player;

	std::vector<Bullet*> bullets;
	std::vector<Enemy*> enemys;
	std::vector<Effect*> effects;

	std::vector<Unit*> gameobjects;

	Text text;

	DWORD createEnemyTime;

	void Start();
	void Update();
	void Draw();
	void Exit();

	void EnemyBulletCollision();

	void CreateObject(ID id, int x, int y);
};