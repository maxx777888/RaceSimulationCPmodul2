#include "FastC.h"


FastC::FastC()
{
	speed = 40;
	mov_time_until_rest = 10;
	cls_name = "Верблюд-быстроход";
}

double FastC::restGround(int amount_of_rest)
{
	if (amount_of_rest == 1) {
		relax = 5;
	}
	else if (amount_of_rest == 2)
	{
		relax = 6.5;
	}
	else {
		relax = 8;
	}

	return relax;
}