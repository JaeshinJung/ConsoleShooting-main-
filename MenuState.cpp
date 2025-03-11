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
	if (GetAsyncKeyState(VK_F1)) {
		GameMng::getIns()->stateCtrl.StateChange(STATE::GAME);
	}
}

void MenuState::Draw()
{
	effect.Draw();
}

void MenuState::Exit()
{
}
