#include"Global.h"

clock_t Time_temp = clock();

void Timestamp()
{

	while (clock() < Time_temp);
	Time_temp = clock() + 100;
	//�趨ʱ��Ϊ1��10֡
	cout << Time_temp << endl;
}
