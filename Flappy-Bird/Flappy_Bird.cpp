#include"Flappy_Bird.h"



void Flappy_Bird::GameStart()
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

void Flappy_Bird::GamePlaying()
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
			tubefront->TubeMove();
			tubeback->TubeMove();
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

void Flappy_Bird::GameOver()
{

}