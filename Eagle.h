#pragma once
#include "AirRace.h"

class Eagle : public AirRace
{
public:
	Eagle();
	double dist_reduction_Air(int distance) override;
};

