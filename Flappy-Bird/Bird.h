#pragma once
#include"Global.h"

class Bird
{
private:
	//绘图点坐标
	int drawX;
	int drawY;

	//图形中心点坐标
	int centerX;
	int centerY;

	int m;
	int Speed;

	//图片信息
	IMAGE flyphoto00;//正常
	IMAGE flyphoto01;//向上
	IMAGE flyphoto02;//正常
	IMAGE flyphoto03;//向下

public:

	Bird(int drawX,int drawY);
	void fly(int &flyans);

};

