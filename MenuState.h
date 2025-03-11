#pragma once

class MenuState : public CState
{
public:

	MenuState();
	~MenuState();

	MenuEffect effect;

	void Start();
	void Update();
	void Draw();
	void Exit();
};