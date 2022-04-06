#include "TubeDown.h"

TubeDown::TubeDown( TubeUp const &tubeup)
{
	drawX = 400;
	drawY = tubeup.drawY + 150 + 350;

	this->height = 350;
	this->wide = 80;

	loadimage(&TubeDownMaskPhoto, "Resorce/picture/TubeDownMaskPhoto.png", 80, 350);
	loadimage(&TubeDownPhoto, "Resorce/picture/TubeDown1.png", 80, 350);
}

void TubeDown::photoprint()
{

	putimage(drawX, drawY , &TubeDownMaskPhoto, SRCPAINT);
	putimage(drawX, drawY , &TubeDownPhoto, SRCAND);
}
