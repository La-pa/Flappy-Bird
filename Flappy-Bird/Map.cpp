#include "Map.h"


void Map:: background()
{
	IMAGE img;
	loadimage(&img, "Resorce/picture/background.png", INTERFACE_WIDTH, INTERFACE_WEIGHT);
	putimage(0, 0, &img);
}

void Map::groundmove(int &ans)
{
	IMAGE img;
	loadimage(&img, "Resorce/picture/ground.png", 500, 150);

	putimage(-ans*10, 550, &img);


	ans++;
	ans %= 10;
}

