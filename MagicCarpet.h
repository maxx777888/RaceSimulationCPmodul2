#pragma once
#include "AirRace.h"

class MagicCarpet : public AirRace
{
public:
	MagicCarpet();
	double dist_reduction_Air(int distance) override;
};

