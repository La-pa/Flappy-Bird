#include "Bird.h"

Bird::Bird(int drawX, int drawY)
{
	this->drawX = drawX;
	this->drawY = drawY;


	this->height = BIRD_WEIGHT;
	this->wide = BIRD_WIDTH;
	speed = 0;

	//水平方向
	loadimage(&flyphoto00, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto01, "Resorce/picture/birdFlutterUpNormal.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto02, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto03, "Resorce/picture/birdFlutterDownNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	//方向向上
	loadimage(&flyphoto10, "Resorce/picture/birdNormalFly.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto11, "Resorce/picture/birdFlutterUpFly.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto12, "Resorce/picture/birdNormalFly.png", BIRD_WIDTH, BIRD_WEIGHT);
	loadimage(&flyphoto13, "Resorce/picture/birdFlutterDownFly.png", BIRD_WIDTH, BIRD_WEIGHT);

	//方向向下
	loadimage(&flyphoto20, "Resorce/picture/birdNormalFall.png",BIRD_WIDTH,BIRD_WEIGHT);
	loadimage(&flyphoto21, "Resorce/picture/birdFlutterUpFall.png",BIRD_WIDTH,BIRD_WEIGHT);
	loadimage(&flyphoto22, "Resorce/picture/birdNormalFall.png",BIRD_WIDTH,BIRD_WEIGHT);
	loadimage(&flyphoto23, "Resorce/picture/birdFlutterDownFall.png",BIRD_WIDTH,BIRD_WEIGHT);
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

bool Bird::Death(Tube tmp)
{
	if (this->CollisionDetection(*tmp.tubeup) || this->CollisionDetection(*tmp.tubedown))
	{
		return true;
	}
		
	if (this->drawY < 0 || this->drawY > 500)
	{
		return true;
	}
	return false;
}
