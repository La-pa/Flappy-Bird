#include"Interface.h"



void GameStart()
{
	initgraph(INTERFACE_WIDTH, INTERFACE_WEIGHT);
	setbkcolor(WHITE);
	setfillcolor(WHITE);
	//setbkmode(OPAQUE);
	setbkmode(TRANSPARENT);
	GamePlaying();

	//getbkcolor();

	closegraph();
	system("pause");




}

void GamePlaying()
{
	Map map;
	Bird bird = Bird(175,275);
	
	//test
	Tube tube(200,-150);
	
	int ans = 0;
	int flyans = 0;
	while (bird.drawY <= 500 && bird.drawY >0)
	{
		map.background();
		tube.photoprint();
		map.groundmove(ans);

		bird.fly(flyans);
		bird.flapwings();
		
		Timestamp();

	}
	
	
}

void GameOver();