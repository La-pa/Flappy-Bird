#include "Map.h"


Map::Map()
{
	//±≥æ∞Õº∆¨
	loadimage(&backgroundphoto, "Resorce/picture/background.png", INTERFACE_WIDTH, INTERFACE_WEIGHT);

	//µÿ√ÊÕº∆¨
	loadimage(&groundphoto, "Resorce/picture/ground.png",400,150);

}

void Map:: background()
{

	putimage(0, 0, &backgroundphoto);
}

void Map::groundmove(int& ans)
{

	putimage(-ans, 550, &groundphoto);
	putimage(400 - ans - 2, 550, &groundphoto);

	ans += 2;
	ans %= 398;
}

