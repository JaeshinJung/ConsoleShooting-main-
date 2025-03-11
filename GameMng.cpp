#include "include.h"

GameMng::GameMng()
{
	stateCtrl.StateAdd(STATE::MENU,new MenuState);
	stateCtrl.StateAdd(STATE::GAME,new GameState);
	
	stateCtrl.StateChange(STATE::MENU);
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	stateCtrl.Update();
}

void GameMng::Draw()
{
	stateCtrl.Draw();
}


