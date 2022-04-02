#include "Bird.h"

Bird::Bird(int centerX, int centerY)
{
	this->centerX = centerX;
	this->centerY = centerY;
	drawX = centerX - BIRD_WIDTH;
	drawY = centerY - BIRD_WEIGHT;

}
