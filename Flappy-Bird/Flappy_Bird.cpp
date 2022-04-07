#include"Flappy_Bird.h"



Flappy_Bird::Flappy_Bird()
{
	loadimage(&title, "Resorce/picture/title.png", 220, 100);
	loadimage(&startButton, "Resorce/picture/startButton.png", 130, 70);
	loadimage(&gameOver, "Resorce/picture/gameOver.png", 250, 300);

}

void Flappy_Bird::GameStart()
{
	initgraph(INTERFACE_WIDTH, INTERFACE_WEIGHT);

	//Bird bird(175, 300);
	Bird* bird = new Bird(175, 300);
	Map* map =  new Map;

	ExMessage msg;
	while (1)
	{

		map->background();
		map->groundmove();
		drawAlpha(&title, 100, 150);
		

		drawAlpha(&startButton, 135, 400);
		bird->StartAnimation();
		Timestamp();
		if (peekmessage(&msg, EM_MOUSE))
		{
			
			switch (msg.message)
			{
			case WM_LBUTTONDOWN:
				//ЪѓБъзѓМќ
				if (msg.x >= 135 && msg.x <= 265 && msg.y >= 400 && msg.y <= 470)
				{
					GamePlaying();
				}
				break;
			default:
				break;
			}
		}
	}


}

void Flappy_Bird::GamePlaying()
{
	Map map;
	Bird bird = Bird(100,275);
	
	//test
	Tube *tubefront= new Tube;
	Tube* tubeback = new Tube;
	tubeback->drawX = 640;
	
	//int flyans = 0;
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
		
		map.groundmove();

		bird.fly();
		bird.flapwings();
		
		Timestamp();
		
	}
	 
	GameOver(map, bird, tubefront, tubeback);
}

void Flappy_Bird::GameOver(Map &map , Bird &bird, Tube* &tubefront,Tube * &tubeback)
{
	map.background();

	tubefront->TubePrint();
	tubeback->TubePrint();

	bird.DeathAnimation();
	map.groundprint();
	drawAlpha(&gameOver, 75, 50);
	drawAlpha(&startButton, 135, 400); 

	mciSendString("open Resorce/sounds/die.wav", NULL, 0, NULL);
	mciSendString("play Resorce/sounds/die.wav", NULL, 0, NULL);

	ExMessage msg;
	while(1)
	{
		
		map.background();
		
		tubefront->TubePrint();
		tubeback->TubePrint();

		bird.DeathAnimation();
		map.groundprint();
		drawAlpha(&gameOver, 75, 50);
		drawAlpha(&startButton, 135, 400);
		

		if (peekmessage(&msg, EM_MOUSE))
		{

			switch (msg.message)
			{
			case WM_LBUTTONDOWN:
				//ЪѓБъзѓМќ
				if (msg.x >= 135 && msg.x <= 265 && msg.y >= 400 && msg.y <= 470)
				{
					mciSendString("close Resorce/sounds/die.wav", NULL, 0, NULL);
					delete tubeback;
					delete tubefront;
					tubeback = nullptr;
					tubefront = nullptr;
					return;
				}
				break;
			default:
				break;
			}
		}
		Timestamp();
	}
	
}