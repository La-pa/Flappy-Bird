#pragma once
//#include"Tube.h"
#include"Global.h"
#include"TubeDown.h"

class TubeUp:public Collider
{
	//friend class TubeDown;
private:
	IMAGE TubeUpPhoto;
	IMAGE TubeUpMaskPhoto;
public:
	TubeUp();
	void photoprint();
};

