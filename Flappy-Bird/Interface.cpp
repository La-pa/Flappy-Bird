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
	while (bird.drawY <= 500 && bird.drawY >0)
	{
		map.background();
		map.groundmove(ans);
		bird.fly(flyans);
		bird.flapwings();
		Timestamp();

	}

}

void GameOver();