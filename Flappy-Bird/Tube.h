#pragma once
#include"Global.h"

class Tube
{
private:
	
	int drawY;

public:

	int drawX;

	//管子图片
	IMAGE TubeUpPhoto;
	IMAGE TubeDownPhoto;

	//构造函数
	Tube();
	
	virtual void photoprint();
};

//class TubeUp :public Tube
//{
//
//
//};

