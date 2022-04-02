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
	class Map map;
	int ans = 0;
	while (1)
	{
		map.background();
		map.groundmove(ans);
		Timestamp();
		if (kbhit())
		{
			break;
		}
	}

}

void GameOver();