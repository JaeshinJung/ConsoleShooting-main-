#include "include.h"
// 프로그래밍 언어
// 라이브러리(stdio.h, stdlib.h, fmod)
// 프레임워크 - 콘솔게임, DXUT
// 툴 - 유니티, 언리얼, 포토샵, 워드, 엑셀
// API - Windows.h, opgg

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}

	Release();

	return 0;
}