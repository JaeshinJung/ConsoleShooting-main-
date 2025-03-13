#include "include.h"

MenuState::MenuState()
{
}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update()
{
	if (GetAsyncKeyState(VK_F1))
	{
		GameMng::GetIns()->stateCtrl.StateChange(new GameState);
	}
}

void MenuState::Draw()
{
	mEffect.Draw();
}

void MenuState::Exit()
{
}
