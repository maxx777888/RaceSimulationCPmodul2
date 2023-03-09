#pragma once
#include <string>
#include "MixRace.h"
class AirRace : public MixRace
{
public:
	//����� ��� ����������� ����������� ���������� ����������
	virtual double dist_reduction_Air(int distance) = 0;
	//����� ��� ������� ������� ����� 
	double race_start(int distance);
	//����� ��� ��������� ����� �������
	std::string get_name();

protected:

	int speed_air = 0; //��������
	double moving_time_air = 0.0;//���-�� ������� � ����
	std::string cls_name;//��� �������
};

