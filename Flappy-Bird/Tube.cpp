#include "Tube.h"

Tube::Tube()
{
	drawX = 400;

	srand((unsigned)time(NULL));
	drawY = -300 + (rand() % 7) * 50;


	loadimage(&TubeUpMaskPhoto, "Resorce/picture/TubeUpMaskPhoto.png", 80, 350);
	loadimage(&TubeUpPhoto, "Resorce/picture/TubeUp1.png", 80, 350);


	loadimage(&TubeDownMaskPhoto, "Resorce/picture/TubeDownMaskPhoto.png", 80, 350);
	loadimage(&TubeDownPhoto, "Resorce/picture/TubeDown1.png", 80, 350);

}

void Tube::photoprint()
{

	int ans = 2;
	drawX -= 2;
	putimage(drawX - ans, drawY, &TubeUpMaskPhoto, SRCPAINT);
	putimage(drawX - ans, drawY, &TubeUpPhoto,SRCAND);
	

	putimage(drawX - ans, drawY + 150 + 350, &TubeDownMaskPhoto, SRCPAINT);
	putimage(drawX - ans, drawY + 150 + 350, &TubeDownPhoto, SRCAND);

}
