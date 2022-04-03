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

	//速度
	double speed;
	

	//图片信息
	IMAGE flyphoto00;//正常
	IMAGE flyphoto01;//向上
	IMAGE flyphoto02;//正常
	IMAGE flyphoto03;//向下

public:

public:
	int drawY;

	Bird(int drawX,int drawY);
	void fly(int &flyans);

	//根据用户输入来拍打翅膀
	void flapwings();
};

