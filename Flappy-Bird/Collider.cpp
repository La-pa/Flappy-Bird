#include "Collider.h"


void Collider::GetCenter()
{
	CenterX = drawX + wide / 2;
	CenterY = drawY + height / 2;
}

bool Collider::CollisionDetection(Collider  tmp)
{

	tmp.GetCenter();
	this->GetCenter();
	int differenceX = abs(this->CenterX - tmp.CenterX);
	int differenceY = abs(this->CenterY - tmp.CenterY);
	if (2 * differenceX < this->wide + tmp.wide) return true;
	if (2 * differenceY < this->height + tmp.height) return true;
	return false;
}
