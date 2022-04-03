#include"Interface.h"



void GameStart()
{
	initgraph(INTERFACE_WIDTH, INTERFACE_WEIGHT);
	GamePlaying();
	closegraph();
	system("pause");
}

void GamePlaying()
{
	Map map;
	Bird bird = Bird(175,275);
	int ans = 0;
	int flyans = 0;
	while (1)
	{
		map.background();
		map.groundmove(ans);
		bird.fly(flyans);
		Timestamp();
		if (kbhit())
		{
			break;
		}
	}

}

void GameOver();