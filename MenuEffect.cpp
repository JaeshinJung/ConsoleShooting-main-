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


void MenuEffect::MDraw()
{
	if (isAlive) {
		//M
		DrawStr(x, y, MBody[index][0], fColor, bColor);
		DrawStr(x, y + 1, MBody[index][1], fColor, bColor);
		DrawStr(x, y + 2, MBody[index][2], fColor, bColor);
		DrawStr(x, y + 3, MBody[index][3], fColor, bColor);
		DrawStr(x, y + 4, MBody[index][4], fColor, bColor);
	}
}

