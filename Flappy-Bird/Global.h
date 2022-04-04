#pragma once
#include<iostream>
#include<easyx.h>
#include<ctime>
#include<conio.h>
#include<time.h>
#include<cstdlib>

using namespace std;


//全局常量

//界面参数
const int INTERFACE_WIDTH = 400;
const int INTERFACE_WEIGHT = 700;

//鸟的参数
const int BIRD_WIDTH = 50;
const int BIRD_WEIGHT = 50;

//重力
const int GRAVITY = 10;

//帧数
const int FPS = 60;

//全局变量
extern clock_t Time_temp ;

//全局函数

//时间戳
void Timestamp();

// 载入PNG图并去透明部分
void drawAlpha(IMAGE* picture, int  picture_x, int picture_y); //x为载入图片的X坐标，y为Y坐标


