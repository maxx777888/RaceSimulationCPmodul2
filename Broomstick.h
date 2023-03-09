#pragma once
#include "AirRace.h"
class Broomstick : public AirRace
{
public:
	Broomstick();
	double dist_reduction_Air(int distance) override;
};

