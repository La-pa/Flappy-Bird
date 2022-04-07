#pragma once
//#include"Tube.h"
#include"Global.h"
#include"Collider.h"

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

