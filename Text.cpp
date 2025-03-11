#include "include.h"
int score = 0;

Text::Text()
{
	str = "Hello";
	isAlive = true;
	ss << "Score: " << score;
	
	str = ss.str();
}

Text::~Text()
{
}

void Text::Draw()
{
	if (isAlive) {
		DrawStr(x, y, str.c_str(), fColor, bColor);
	}
}

void Text::Update()
{
	ss.str("");
	ss << "Score: " << score;
	str = ss.str();
}