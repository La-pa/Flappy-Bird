#include "TubeUp.h"

TubeUp::TubeUp()
{
	//drawX = 400;
	srand((unsigned)time(NULL));
	drawY = -300 + (rand() % 7) * 50;


}

void TubeUp::photoprint()
{

	putimage(drawX, drawY, &TubeUpMaskPhoto, SRCPAINT);
	putimage(drawX, drawY, &TubeUpPhoto, SRCAND);



}
