#pragma once
#include "string"

class MixRace //����� ��� ���������� ��������� �����. 
{
public:
	//����������� ����� ���������� ����� ����� �������
	virtual double race_start(int dis) = 0;
	//����������� ����� ���������� ��� �������
	virtual std::string get_name() = 0;

};

