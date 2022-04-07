#pragma once
//#include"Tube.h"
#include"TubeUp.h"

class TubeDown:public Collider
{
private:
	IMAGE TubeDownPhoto;
	IMAGE TubeDownMaskPhoto;
public:
	TubeDown(TubeUp  tubeup);
	void photoprint();

};

