#pragma once
#include"Global.h"

class Tube
{
private:
	
	int drawY;

public:

	int drawX;

	//����ͼƬ
	IMAGE TubeUpPhoto;
	IMAGE TubeDownPhoto;

	//���캯��
	Tube(int x, int y);
	
	virtual void photoprint();
};

