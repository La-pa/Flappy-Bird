#include "Tube.h"

Tube::Tube()
{
	drawX = 400;

	srand((unsigned)time(NULL));
	drawY = -300 + (rand() % 7) * 50;

	loadimage(&TubeUpPhoto, "Resorce/picture/TubeUp.png", 80, 350);

	loadimage(&TubeDownPhoto, "Resorce/picture/TubeDown.png", 80, 350);
}

void Tube::photoprint()
{
	//drawAlpha(&TubeUpPhoto, drawX, drawY);
	//drawAlpha(&TubeDownPhoto, drawX, drawY + 150 );
	int ans = 2;
	drawX -= 2;
	putimage(drawX - ans, drawY, &TubeUpPhoto);
	putimage(drawX - ans, drawY + 150 + 350, &TubeDownPhoto);

}
