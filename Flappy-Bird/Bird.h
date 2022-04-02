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

public:
	Bird(int centerX, int centerY);
};

