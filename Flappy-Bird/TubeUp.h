#pragma once
#include"Tube.h"
//#include"TubeDown.h"

class TubeUp : public Tube
{
	friend class TubeDown;
public:
	TubeUp( );
	void photoprint();
};

