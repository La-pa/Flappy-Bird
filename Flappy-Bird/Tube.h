#pragma once
#include"Global.h"

class Tube
{
private:
	
	int drawY;

public:

	int drawX;

	//加载管子图片
	IMAGE tubephoto;

	//构造函数
	Tube(int x);
	
	virtual void photoprint();
};

