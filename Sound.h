#pragma once
class Sound
{
public:
	Sound();
	~Sound();

	bool LoadSound(std::string path, bool isloop);

	void Play();
	void Stop();

	FMOD::Sound* sound;			// 사운드 파일에 대한 정보
	FMOD::Channel* channel;		// 스피커
};