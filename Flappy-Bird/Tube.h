#pragma once
#include"Global.h"

class Tube
{
private:
	
	int drawY;

public:

	int drawX;

	//���ع���ͼƬ
	IMAGE tubephoto;

	//���캯��
	Tube(int x);
	
	virtual void photoprint();
};

