#pragma once
class MenuState : public CState
{
public:
	MenuState();
	~MenuState();

	MenuEffect mEffect;

	void Start();
	void Update();
	void Draw();
	void Exit();
};