#include "Race.h"
#pragma once
class FastC : public Race
{
public:
	FastC();
	//����� ��� ������� ������� �� ������ 
	double restGround(int distance) override;
};

