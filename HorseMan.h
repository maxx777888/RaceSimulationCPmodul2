#include "Race.h"
#pragma once
class HorseMan : public Race
{
public:
	HorseMan();
	//����� ��� ������� ������� �� ������ 
	double restGround(int distance) override;
};

