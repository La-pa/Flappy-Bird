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

	//ͼƬ��Ϣ
	IMAGE flyphoto00;//����
	IMAGE flyphoto01;//����
	IMAGE flyphoto02;//����
	IMAGE flyphoto03;//����

public:

	Bird(int drawX,int drawY);
	void fly(int &flyans);

};

