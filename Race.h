#include<string>
#include "MixRace.h"
#pragma once
class Race : public MixRace
{
public:
	//����� ��� ������� ������� �� ������ 
	virtual double restGround(int dis) = 0;
	//����� ��� ������� ������� ����� 
	double race_start(int dis);
	//����� ��� ��������� ����� �������
	std::string get_name();
protected:

	int speed = 0;//��������
	int mov_time_until_rest = 0;//���-�� ������� � ���� �� ���������
	std::string cls_name = "NO";//��� �������
	double relax = 0;//����� ������
};

