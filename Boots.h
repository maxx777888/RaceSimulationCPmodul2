#include "Race.h"
#pragma once
class Boots : public Race
{
public:
	Boots();
	//����� ��� ������� ������� �� ������ 
	double restGround(int distance) override;
};

