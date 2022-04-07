#include "Tube.h"

Tube::Tube()
{
	
	drawX = 400;

	tubeup = new TubeUp();
	tubedown = new TubeDown(*tubeup);

	

	

}

void Tube::TubeMove()
{

	
	tubeup->SetDrawX(this->drawX);
	tubedown->SetDrawX(this->drawX);
	tubeup->photoprint();
	tubedown->photoprint();
	drawX -= 2;
	
	
}

void Tube::TubePrint()
{
	tubeup->SetDrawX(this->drawX);
	tubedown->SetDrawX(this->drawX);
	tubeup->photoprint();
	tubedown->photoprint();
}

Tube::~Tube()
{
	delete	tubeup;
	delete tubedown;
	
	tubedown = NULL;
	tubeup = NULL;
}
