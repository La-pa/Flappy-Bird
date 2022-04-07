#pragma once
#include"Global.h"
#include"Map.h"
#include"Bird.h"
#include "Tube.h"

class Flappy_Bird
{
private:
	IMAGE title;
	IMAGE startButton;
	IMAGE gameOver;
public:
	Flappy_Bird();

	//��Ϸ��ʼ����
	void GameStart();

	//��Ϸ���н���
	void GamePlaying();

	//��Ϸ��������
	void GameOver(Map& map, Bird& bird, Tube*& tubefront, Tube*& tubeback); 
};

