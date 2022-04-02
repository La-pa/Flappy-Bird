#include"Interface.h"



void GameStart()
{
	initgraph(450, 700);
	GamePlaying();
	system("pause");
}

void GamePlaying()
{
	class Map map;
	map.background();
}

void GameOver();