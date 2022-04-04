#include "Tube.h"

Tube::Tube(int x,int y)
{
	drawX = x;
	drawY = y;

	loadimage(&TubeUpPhoto, "Resorce/picture/TubeUp.png", 80, 350);

	loadimage(&TubeDownPhoto, "Resorce/picture/TubeDown.png", 80, 350);
}

void Tube::photoprint()
{
	//drawAlpha(&TubeUpPhoto, drawX, drawY);
	//drawAlpha(&TubeDownPhoto, drawX, drawY + 150 );

	putimage(drawX, drawY, &TubeUpPhoto);
	putimage(drawX, drawY + 150 + 350, &TubeDownPhoto);
}
