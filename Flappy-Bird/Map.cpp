#include "Map.h"


void Map:: background()
{
	IMAGE img;
	loadimage(&img, "Resorce/picture/background.png", 400, 700);
	putimage(0, 0, &img);
}