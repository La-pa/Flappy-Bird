#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	Tube *up;
protected:
	
	int drawY;
	//int drawX;

	//����ͼƬ
	IMAGE TubeUpPhoto;
	IMAGE TubeUpMaskPhoto;

	IMAGE TubeDownPhoto;
	IMAGE TubeDownMaskPhoto;

	//TubeUp tubeup;
	//TubeDown tubedown;

public:

	int drawX;

	//���캯��
	Tube();
	
	void photoprint(TubeUp tubeup, TubeDown tubedown);
};


