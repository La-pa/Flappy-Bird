#include "Tube.h"

Tube::Tube(int x)
{
	drawX = x;

	loadimage(&tubephoto, "Resorce/picture/tube.png", 80, 225);
}

void Tube::photoprint()
{
	drawAlpha(&tubephoto, drawX, 0);
}
