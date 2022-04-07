#include "Tube.h"

Tube::Tube()
{
	//drawX = 400;
	//TubeUp tubeup;
	//TubeDown tubedown(tubeup);
	//loadimage(&TubeUpMaskPhoto, "Resorce/picture/TubeUpMaskPhoto.png", 80, 350);
	//loadimage(&TubeUpPhoto, "Resorce/picture/TubeUp1.png", 80, 350);
	//loadimage(&TubeDownMaskPhoto, "Resorce/picture/TubeDownMaskPhoto.png", 80, 350);
	//loadimage(&TubeDownPhoto, "Resorce/picture/TubeDown1.png", 80, 350);

	tubeup = new TubeUp();
	tubedown = new TubeDown(*tubeup);
	//TubeUp temp;
	//tubeup = temp;
	//TubeDown tmp = TubeDown(tubeup);
	//tubedown = tmp;

	drawX = 400;

}

void Tube::TubeMove()
{

	//int ans = 2;
	//drawX -= 2;
	//putimage(drawX - ans, drawY, &TubeUpMaskPhoto, SRCPAINT);
	//putimage(drawX - ans, drawY, &TubeUpPhoto,SRCAND);
	//
	//putimage(drawX - ans, drawY + 150 + 350, &TubeDownMaskPhoto, SRCPAINT);
	//putimage(drawX - ans, drawY + 150 + 350, &TubeDownPhoto, SRCAND);
	tubeup->SetDrawX(this->drawX);
	tubedown->SetDrawX(this->drawX);
	tubeup->photoprint();
	tubedown->photoprint();
	drawX -= 2;
	
	
}

Tube::~Tube()
{
	delete	tubeup;
	delete tubedown;
	
	tubedown = NULL;
	tubeup = NULL;
}
