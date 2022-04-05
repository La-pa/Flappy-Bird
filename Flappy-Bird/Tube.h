#pragma once
#include"Global.h"

class Tube
{
protected:
	
	int drawY;
	//int drawX;

	//管子图片
	IMAGE TubeUpPhoto;
	IMAGE TubeUpMaskPhoto;

	IMAGE TubeDownPhoto;
	IMAGE TubeDownMaskPhoto;

public:

	int drawX;

	//构造函数
	Tube();
	
	virtual void photoprint();
};


