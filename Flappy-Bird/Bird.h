#pragma once
#include"Global.h"

class Bird
{
private:
	//��ͼ������
	int drawX;

	//ͼ�����ĵ�����
	int centerX;
	int centerY;

	//�ٶ�
	double speed;
	

	//ͼƬ��Ϣ
	IMAGE flyphoto00;//����
	IMAGE flyphoto01;//����
	IMAGE flyphoto02;//����
	IMAGE flyphoto03;//����

public:

public:
	int drawY;

	Bird(int drawX,int drawY);
	void fly(int &flyans);

	//�����û��������Ĵ���
	void flapwings();
};

