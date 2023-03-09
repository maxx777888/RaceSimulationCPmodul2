#include "Race.h"
#pragma once

class Camel : public Race
{
public:
	Camel();
	//Метод для расчета времени на отдыхе 
	double restGround(int distance) override;

};

