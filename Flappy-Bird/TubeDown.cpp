#include "TubeDown.h"

TubeDown::TubeDown( TubeUp const &tubeup)
{
	drawY = tubeup.drawY + 150 + 350;
}

void TubeDown::photoprint()
{
	//int ans = 2;
	//putimage(drawX - ans, drawY + 150 + 350, &TubeDownMaskPhoto, SRCPAINT);
	//putimage(drawX - ans, drawY + 150 + 350, &TubeDownPhoto, SRCAND);
	putimage(drawX, drawY , &TubeDownMaskPhoto, SRCPAINT);
	putimage(drawX, drawY , &TubeDownPhoto, SRCAND);
}
