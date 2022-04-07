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

	//游戏开始界面
	void GameStart();

	//游戏进行界面
	void GamePlaying();

	//游戏结束界面
	void GameOver(Map& map, Bird& bird, Tube*& tubefront, Tube*& tubeback); 
};

