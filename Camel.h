#include "Race.h"
#pragma once

class Camel : public Race
{
public:
	Camel();
	//����� ��� ������� ������� �� ������ 
	double restGround(int distance) override;

};

