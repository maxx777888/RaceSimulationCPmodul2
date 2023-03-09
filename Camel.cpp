#include "Camel.h"

Camel::Camel()
{
	speed = 10;
	mov_time_until_rest = 30;
	cls_name = "Верблюд";

}

double Camel::restGround(int amount_of_rest)
{
	if (amount_of_rest == 1) {
		relax = 5;
	}
	else
	{
		relax = 8;
	}
	return relax;
}
