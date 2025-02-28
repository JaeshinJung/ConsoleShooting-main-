#pragma once
class Bullet
{
public:
	Bullet();
	~Bullet();

	bool isAlive;
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;

	void Update();
	void Draw();

	void Move();
	void Clipping();

	void Enable(int x, int y);
	void Disable();
};

void CreateBullet(int x, int y);

extern Bullet bullets[D_BULLET_MAX];