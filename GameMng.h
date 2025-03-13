#pragma once

// 상속 -> 중복 코드 제거
// 싱글톤 -> GameMng 업그레이드
// 유한상태기계(FSM) -> 메뉴화면,게임화면
// FMOD -> 사운드
// 자료구조(스택,큐,리스트) 구현
// 오브젝트 풀링 업그레이드

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	CStateCtrl stateCtrl;

	FMOD::System* system;	//FMOD 사운드 매니저
	Sound bulletSnd;
	Sound backgroundSnd;

	void Init();

	void Update();
	void Draw();
};