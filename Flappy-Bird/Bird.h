#pragma once
#include"Global.h"

class Bird
{
private:
	//��ͼ������
	int drawX;
	int drawY;

	//ͼ�����ĵ�����
	int centerX;
	int centerY;

	int m;
	int Speed;

public:
	Bird(int centerX, int centerY);
};

