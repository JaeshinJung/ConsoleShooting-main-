#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include <string>
#include <iostream>
#include <sstream>

#include "Define.h"
#include "Singleton.h"

#include "Unit.h"

#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Effect.h"
#include "Text.h"
#include "MenuEffect.h"

#include "State.h"
#include "StateCtrl.h"

#include "GameState.h"
#include "MenuState.h"

#include "GameMng.h"

extern int score;

void Init();
void Update();
void Draw();
void Release();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();