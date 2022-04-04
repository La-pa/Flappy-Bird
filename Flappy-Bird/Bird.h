#pragma once
#include"Global.h"

class Bird
{
private:
	//绘图点坐标
	int drawX;

	//图形中心点坐标
	int centerX;
	int centerY;

	//速度
	double speed;
	

	//图片信息
	//水平方向
	IMAGE flyphoto00;//正常
	IMAGE flyphoto01;//向上
	IMAGE flyphoto02;//正常
	IMAGE flyphoto03;//向下

	//方向向上
	IMAGE flyphoto10;//正常
	IMAGE flyphoto11;//向上
	IMAGE flyphoto12;//正常
	IMAGE flyphoto13;//向下

	//方向向下
	IMAGE flyphoto20;//正常
	IMAGE flyphoto21;//向上
	IMAGE flyphoto22;//正常
	IMAGE flyphoto23;//向下

public:
	int drawY;

	Bird(int drawX,int drawY);
	void fly(int &flyans);

	//根据用户输入来拍打翅膀
	void flapwings();
};

