#include "include.h"

char effectBody[3][3][3] =
{
	{
		{' ', ' ', ' '},
		{' ', 'O', ' '},
		{' ', ' ', ' '}
	},
	{
		{' ', '|', ' '},
		{'-', '+', '-'},
		{' ', '|', ' '}
	},
	{
		{'*', ' ', '*'},
		{' ', '*', ' '},
		{'*', ' ', '*'}
	}
};

Effect::Effect()
{
	fColor = YELLOW;
	index = 0;
	indextUpdateTime = 0;
}

Effect::~Effect()
{
}

void Effect::Update()
{
	if (isAlive && indextUpdateTime <= GetTickCount())
	{
		index++;
		indextUpdateTime = GetTickCount() + 300;

		if (index >= 3)
			Disable();
	}
}

void Effect::Draw()
{
	if (isAlive)
	{
		DrawChar(x - 1, y - 1, effectBody[index][0][0], fColor, bColor);
		DrawChar(x, y - 1, effectBody[index][0][1], fColor, bColor);
		DrawChar(x + 1, y - 1, effectBody[index][0][2], fColor, bColor);

		DrawChar(x - 1, y, effectBody[index][1][0], fColor, bColor);
		DrawChar(x, y, effectBody[index][1][1], fColor, bColor);
		DrawChar(x + 1, y, effectBody[index][1][2], fColor, bColor);

		DrawChar(x - 1, y + 1, effectBody[index][2][0], fColor, bColor);
		DrawChar(x, y + 1, effectBody[index][2][1], fColor, bColor);
		DrawChar(x + 1, y + 1, effectBody[index][2][2], fColor, bColor);
	}
}

void Effect::Enable(int x, int y)
{
	Unit::Enable(x, y);
	index = 0;
	indextUpdateTime = GetTickCount() + 300;
}
