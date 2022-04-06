#include "TubeUp.h"

TubeUp::TubeUp()
{
	drawX = 400;
	srand((unsigned)time(NULL));
	drawY = -300 + (rand() % 7) * 50;

	this->height = 350;
	this->wide = 80;

	loadimage(&TubeUpMaskPhoto, "Resorce/picture/TubeUpMaskPhoto.png", 80, 350);
	loadimage(&TubeUpPhoto, "Resorce/picture/TubeUp1.png", 80, 350);
}

void TubeUp::photoprint()
{

	putimage(drawX, drawY, &TubeUpMaskPhoto, SRCPAINT);
	putimage(drawX, drawY, &TubeUpPhoto, SRCAND);

}
