#pragma once

//상속 -> 중복 코드 제거
//싱글톤 -> GameMng 업그레이드
//유한상태기계(FSM) -> 메뉴화면, 게임화면
//FMOD -> 사운드 추가
//자료구조(스택, 큐, 리스트)
//오프젝트 풀링 업그레이드

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy enemys[D_ENEMY_MAX];
	Effect effects[D_EFFECT_MAX];
	Text text;

	void Update();
	void Draw();

	void EnemyBulletCollision();
	
	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
	void CreateEffect(int x, int y);
};