#include "Race.h"
#pragma once
class FastC : public Race
{
public:
	FastC();
	//Метод для расчета времени на отдыхе 
	double restGround(int distance) override;
};

