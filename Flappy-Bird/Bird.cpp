#include "Bird.h"

Bird::Bird(int drawX, int drawY)
{
	this->drawX = drawX;
	this->drawY = drawY;

	loadimage(&flyphoto00, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	speed = 0;

	loadimage(&flyphoto02, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	loadimage(&flyphoto03, "Resorce/picture/birdFlutterDownNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

}

void Bird::fly(int &flyans)
{
	int temp = flyans;
	flyans /= 15;
	if (speed < 0)
	{
		switch (flyans)
		{
		case 0:drawAlpha(&flyphoto10, drawX, drawY); break;
		case 1:drawAlpha(&flyphoto11, drawX, drawY); break;
		case 2:drawAlpha(&flyphoto12, drawX, drawY); break;
		case 3:drawAlpha(&flyphoto13, drawX, drawY); break;
		default:
			break;
		}
	}
	else if (speed > 0)
	{
		switch (flyans)
		{
		case 0:drawAlpha(&flyphoto20, drawX, drawY); break;
		case 1:drawAlpha(&flyphoto21, drawX, drawY); break;
		case 2:drawAlpha(&flyphoto22, drawX, drawY); break;
		case 3:drawAlpha(&flyphoto23, drawX, drawY); break;
		default:
			break;
		}
	}
	else 
	{
		switch (flyans)
		{
		case 0:drawAlpha(&flyphoto00, drawX, drawY); break;
		case 1:drawAlpha(&flyphoto01, drawX, drawY); break;
		case 2:drawAlpha(&flyphoto02, drawX, drawY); break;
		case 3:drawAlpha(&flyphoto03, drawX, drawY); break;
		default:
			break;
		}
	}
	
	

	drawY += int(speed*1);
	speed += 0.16;
	flyans = temp;
	flyans+= 3;
	flyans %= 60;
}

void Bird::flapwings()
{
	if (kbhit())
	{
		getch();
		if (speed > 0)
		{
			speed = -5;
		}
		else
		{
			speed += -5;
		}
		//kbhit();
		//break;
	}
}
