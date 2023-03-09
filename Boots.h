#include "Race.h"
#pragma once
class Boots : public Race
{
public:
	Boots();
	//Метод для расчета времени на отдыхе 
	double restGround(int distance) override;
};

