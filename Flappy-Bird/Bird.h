#pragma once
#include"Global.h"
#include"Collider.h"
#include"Tube.h"


class Bird:public Collider
{
private:

	//速度
	double speed;

	//音乐;
	int option;

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

	int flyans;
public:

	Bird(int drawX,int drawY);
	void fly();

	void flymusic();
	

	//根据用户输入来拍打翅膀
	void flapwings();

	//开始动画
	void StartAnimation();

	//死亡判断
	bool Death(Tube* tmp);

	//死亡动画
	void DeathAnimation();
	
};

