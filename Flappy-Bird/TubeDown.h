#pragma once
#include"Tube.h"
#include"TubeUp.h"

class TubeDown:public Tube
{
public:
	TubeDown(TubeUp const& tubeup);

	void photoprint();

};

