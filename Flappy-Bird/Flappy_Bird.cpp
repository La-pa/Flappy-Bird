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
	cout << "ÄãÒÑËÀÍö" << endl;
	system("pause");




}

void Flappy_Bird::GamePlaying()
{
	Map map;
	Bird bird = Bird(100,275);
	
	//test
	Tube *tubefront= new Tube;
	Tube* tubeback = new Tube;
	tubeback->drawX = 640;
	
	int ans = 0;
	int flyans = 0;
	while (1)
	{
		map.background();

		if (bird.Death(tubefront))
		{
			break;
		}

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