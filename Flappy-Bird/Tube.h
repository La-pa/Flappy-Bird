#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	
	int drawX;
public:

	//���캯��
	Tube();

	TubeUp* tubeup;
	TubeDown* tubedown;

	void TubeMove();
	~Tube();
};



