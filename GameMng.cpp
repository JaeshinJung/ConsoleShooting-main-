#include "include.h"
GameMng::GameMng()
{
	// dynamic_cast
	// static_cast


	//stateCtrl.StateAdd(STATE::MENU, new MenuState);
	//stateCtrl.StateAdd(STATE::GAME, new GameState);

	//stateCtrl.StateChange(STATE::MENU);
}

GameMng::~GameMng()
{
	system->release();
}

void GameMng::Init()
{
	system = nullptr;
	FMOD::System_Create(&system);
	system->init(512, FMOD_INIT_NORMAL, nullptr);


	bool result = backgroundSnd.LoadSound("Sound/backgroundMusic.mp3", true);
	bool result2 = bulletSnd.LoadSound("Sound/bullet.wav", false);


	if (result)
		backgroundSnd.Play();


	stateCtrl.StateChange(new MenuState);
}

void GameMng::Update()
{
	system->update();
	stateCtrl.Update();
}

void GameMng::Draw()
{
	stateCtrl.Draw();
}