#pragma once
#include"Global.h"

class Map
{
private:
	IMAGE backgroundphoto;//����ͼƬ
	IMAGE groundphoto;//����ͼƬ
public:
	//���캯��
	Map();

	//����ͼƬ
	void background();

	//�����ƶ�
	void groundmove(int &ans);

};

