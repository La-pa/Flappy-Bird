#pragma once
#include"Global.h"

class Map
{
private:
	IMAGE backgroundphoto;//背景图片
	IMAGE groundphoto;//地面图片

	int ans;
public:
	//构造函数
	Map();

	//背景图片
	void background();

	//地面移动
	void groundmove();

	//打印地面
	void groundprint();

};

