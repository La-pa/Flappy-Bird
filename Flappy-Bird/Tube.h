#pragma once
#include"Global.h"
#include"TubeUp.h"
#include"TubeDown.h"

class Tube
{

private:
	
	int drawX;
	
protected:

	//int drawY;
	//int drawX;

	////����ͼƬ
	//IMAGE TubeUpPhoto;
	//IMAGE TubeUpMaskPhoto;

	//IMAGE TubeDownPhoto;
	//IMAGE TubeDownMaskPhoto;

	//TubeUp tubeup;
	//TubeDown tubedown;

public:

	//���캯��
	Tube();

	TubeUp* tubeup;
	TubeDown* tubedown;

	void TubeMove();
	~Tube();
};



