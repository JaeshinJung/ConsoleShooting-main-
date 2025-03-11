#include "include.h"

char effectBody[5][5][5] =
{
	{
		{'o', ' ', ' ',' ','o'},
		{'o', 'o', ' ','o','o'},
		{'o', ' ', 'o',' ','o'},
		{'o', ' ', ' ',' ','o'},
		{'o', ' ', ' ',' ','o'}
	},
	{
		{'o', 'o', 'o','o','o'},
		{'o', ' ', ' ',' ',' '},
		{'o', 'o', 'o','o','o'},
		{'o', ' ', ' ',' ',' '},
		{'o', 'o', 'o','o','o'}
	},
	{
		{'o', ' ', ' ',' ','o'},
		{'o', 'o', ' ',' ','o'},
		{'o', ' ', 'o',' ','o'},
		{'o', ' ', ' ','o','o'},
		{'o', ' ', ' ',' ','o'}
	},
	{
		{'o', ' ', ' ',' ','o'},
		{'o', ' ', ' ',' ','o'},
		{'o', ' ', ' ',' ','o'},
		{'o', ' ', ' ',' ','o'},
		{' ', 'o', 'o','o',' '}
	},
	{
		{'o', 'o', 'o','o','o'},
		{'o', ' ', ' ',' ',' '},
		{'o', 'o', 'o','o','o'},
		{'o', ' ', ' ',' ',' '},
		{'o', 'o', 'o','o','o'}
	}
};

MenuEffect::MenuEffect()
{
	x = 0;
	y = 0;
	fColor = BLUE;
	bColor = BLACK;
}

MenuEffect::~MenuEffect()
{

}


void MenuEffect::Draw()
{
	for (int i = 0; i < 5; i++) {
		y = 0;
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				DrawChar(x, y, effectBody[i][j][k], fColor, bColor);
				x++;
			}
			y++;
		}
		x++;
	}
}

