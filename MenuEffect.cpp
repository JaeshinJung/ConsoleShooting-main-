#include "include.h"

char MBody[3][5][5] =
{
	{
		{' ', ' ', ' ',' ',' '},
		{' ', 'o', ' ','o',' '},
		{' ', ' ', 'o',' ',' '},
		{' ', ' ', ' ',' ',' '},
		{' ', ' ', ' ',' ',' '}
	},
	{
		{'o', ' ', ' ',' ','o'},
		{'o', 'o', ' ','o','o'},
		{' ', ' ', 'o',' ',' '},
		{' ', ' ', ' ',' ',' '},
		{' ', ' ', ' ',' ',' '}
	},
	{
		{'o', ' ', ' ',' ','o'},
		{'o', 'o', ' ','o','o'},
		{'o', ' ', 'o',' ','o'},
		{'o', ' ', ' ',' ','o'},
		{'o', ' ', ' ',' ','o'}
	}
};

MenuEffect::MenuEffect()
{
	fColor = BLUE;
	bColor = BLACK;
	index = 0;
	x = 0;
	y = 0;
}

MenuEffect::~MenuEffect()
{
}


void MenuEffect::Draw()
{
	MDraw();
	EDraw();
	NDraw();
	UDraw();
}

void MenuEffect::MDraw()
{
	//M
	DrawStr(x+2, y, MBody[index][0], fColor, bColor);
	DrawStr(x+2, y + 1, MBody[index][1], fColor, bColor);
	DrawStr(x+2, y + 2, MBody[index][2], fColor, bColor);
	DrawStr(x+2, y + 3, MBody[index][3], fColor, bColor);
	DrawStr(x+2, y + 4, MBody[index][4], fColor, bColor);
}

void MenuEffect::EDraw()
{
}

void MenuEffect::NDraw()
{
}

void MenuEffect::UDraw()
{
}

void MenuEffect::Update()
{
	if (indextUpdateTime <= GetTickCount())
	{
		index++;
		indextUpdateTime = GetTickCount() + 200;

		if (index >= 3)
			index = 0;
	}
}

