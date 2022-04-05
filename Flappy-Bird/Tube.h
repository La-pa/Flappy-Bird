#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	Tube *up;
protected:
	
	int drawY;
	//int drawX;

	//管子图片
	IMAGE TubeUpPhoto;
	IMAGE TubeUpMaskPhoto;

	IMAGE TubeDownPhoto;
	IMAGE TubeDownMaskPhoto;

	//TubeUp tubeup;
	//TubeDown tubedown;

public:

	int drawX;

	//构造函数
	Tube();
	
	void photoprint(TubeUp tubeup, TubeDown tubedown);
};


