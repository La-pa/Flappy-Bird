#pragma once
#include"Global.h"

class Collider
{

protected:

	//绘制点坐标
	int drawX;
	int drawY;

public:

	//物体的宽度和高度
	int wide;
	int height;

	//物体中心点
	int CenterX;
	int CenterY;

	int GetDrawX();
	int GetDrawY();

	void SetDrawX(int x);
	void SetDrawY(int y);

	void GetCenter();

	bool CollisionDetection(Collider*  tmp);
};

