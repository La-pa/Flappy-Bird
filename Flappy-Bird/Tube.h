#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	
	int drawX;
	
protected:

	//int drawY;
	//int drawX;

	////管子图片
	//IMAGE TubeUpPhoto;
	//IMAGE TubeUpMaskPhoto;

	//IMAGE TubeDownPhoto;
	//IMAGE TubeDownMaskPhoto;

	//TubeUp tubeup;
	//TubeDown tubedown;

public:

	//构造函数
	Tube();

	TubeUp* tubeup;
	TubeDown* tubedown;

	void TubeMove();
	~Tube();
};



