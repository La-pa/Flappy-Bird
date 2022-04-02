#include"Global.h"

clock_t Time_temp = clock();

void Timestamp()
{

	while (clock() < Time_temp);
	Time_temp = clock() + 100;
	//设定时间为1秒10帧
	cout << Time_temp << endl;
}
