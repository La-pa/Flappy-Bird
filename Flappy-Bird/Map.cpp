#include "Map.h"


Map::Map()
{
	//±≥æ∞Õº∆¨
	loadimage(&backgroundphoto, "Resorce/picture/background.png", INTERFACE_WIDTH, INTERFACE_WEIGHT);

	//µÿ√ÊÕº∆¨
	loadimage(&groundphoto, "Resorce/picture/ground.png",400 + 93, 150);

}

void Map:: background()
{

	putimage(0, 0, &backgroundphoto);
}

void Map::groundmove(int &ans)
{
	//loadimage(&img, "Resorce/picture/ground.png", 500, 150);
	putimage(-ans*10, 550, &groundphoto);
	ans++;
	ans %= 10;
}

