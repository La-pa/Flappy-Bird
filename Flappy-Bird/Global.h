#pragma once
#include<iostream>
#include<easyx.h>
#include<ctime>
#include<conio.h>
#include<time.h>
#include<cstdlib>

using namespace std;


//ȫ�ֳ���

//�������
const int INTERFACE_WIDTH = 400;
const int INTERFACE_WEIGHT = 700;

//��Ĳ���
const int BIRD_WIDTH = 50;
const int BIRD_WEIGHT = 50;

//����
const int GRAVITY = 10;

//֡��
const int FPS = 60;

//ȫ�ֱ���
extern clock_t Time_temp ;

//ȫ�ֺ���

//ʱ���
void Timestamp();

// ����PNGͼ��ȥ͸������
void drawAlpha(IMAGE* picture, int  picture_x, int picture_y); //xΪ����ͼƬ��X���꣬yΪY����


