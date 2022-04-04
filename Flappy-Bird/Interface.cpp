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
	Tube *tubefront= new Tube;
	Tube* tubeback = new Tube;
	tubeback->drawX = 640;
	
	int ans = 0;
	int flyans = 0;
	while (bird.drawY <= 500 && bird.drawY >0)
	{
		map.background();

		if (tubefront != nullptr)
		{
			tubefront->photoprint();
			tubeback->photoprint();
		}

		
		if (tubefront->drawX < -80)
		{
			delete tubefront;
			tubefront = tubeback;
			tubeback = new Tube;
		}

		map.groundmove(ans);

		bird.fly(flyans);
		bird.flapwings();
		
		Timestamp();
		
	}
	
	
}

void GameOver();