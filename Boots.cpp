#include "Boots.h"

Boots::Boots()
{
	speed = 6;
	mov_time_until_rest = 60;
	cls_name = "Ботинки-вездеходы";

}
double Boots::restGround(int amount_of_rest)
{
	if (amount_of_rest == 1) {
		relax = 10;
	}
	else
	{
		relax = 5;
	}

	return relax;
}