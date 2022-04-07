#pragma once
#include"Global.h"
#include"TubeDown.h"
#include"TubeUp.h"


class Tube
{

private:
	
	
public:
	int drawX;
	//¹¹Ôìº¯Êý
	Tube();

	class TubeUp* tubeup;
	class TubeDown* tubedown;

	void TubeMove();
	~Tube();
};



