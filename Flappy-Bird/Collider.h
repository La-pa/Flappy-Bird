#pragma once
#include"Global.h"
class Collider
{

protected:

	//���Ƶ�����
	int drawX;
	int drawY;

public:

	//����Ŀ�Ⱥ͸߶�
	int wide;
	int height;

	//�������ĵ�
	int CenterX;
	int CenterY;

	void GetCenter();

	bool CollisionDetection(Collider  tmp);
};

