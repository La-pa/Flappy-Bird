#include "TubeDown.h"

TubeDown::TubeDown( TubeUp tubeup)
{
	this->drawX = 400;
	this->drawY = tubeup.GetDrawY() + 150 + 350;

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
