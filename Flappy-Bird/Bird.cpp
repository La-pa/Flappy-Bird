#include "Bird.h"

Bird::Bird(int drawX, int drawY)
{
	this->drawX = drawX;
	this->drawY = drawY;

	loadimage(&flyphoto00, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	loadimage(&flyphoto01, "Resorce/picture/birdFlutterUpNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	loadimage(&flyphoto02, "Resorce/picture/birdNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

	loadimage(&flyphoto03, "Resorce/picture/birdFlutterDownNormal.png", BIRD_WIDTH, BIRD_WEIGHT);

}

void Bird::fly(int &flyans)
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
	flyans++;
	flyans %= 4;
}
