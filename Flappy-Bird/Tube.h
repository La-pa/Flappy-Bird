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
	Tube();
	
	virtual void photoprint();
};

//class TubeUp :public Tube
//{
//
//
//};

