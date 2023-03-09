#include "Race.h"
#pragma once
class HorseMan : public Race
{
public:
	HorseMan();
	//Метод для расчета времени на отдыхе 
	double restGround(int distance) override;
};

