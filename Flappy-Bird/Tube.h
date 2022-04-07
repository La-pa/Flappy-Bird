#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	
	int drawX;
public:

	//¹¹Ôìº¯Êý
	Tube();

	TubeUp* tubeup;
	TubeDown* tubedown;

	void TubeMove();
	~Tube();
};



