#pragma once
#include"Global.h"

class Tube
{
protected:
	
	int drawY;
	//int drawX;

	//����ͼƬ
	IMAGE TubeUpPhoto;
	IMAGE TubeUpMaskPhoto;

	IMAGE TubeDownPhoto;
	IMAGE TubeDownMaskPhoto;

public:

	int drawX;

	//���캯��
	Tube();
	
	virtual void photoprint();
};


