#include<string>
#include "MixRace.h"
#pragma once
class Race : public MixRace
{
public:
	//Метод для расчета времени на отдыхе 
	virtual double restGround(int dis) = 0;
	//Метод для расчета времени гонки 
	double race_start(int dis);
	//Метод для получения имени объекта
	std::string get_name();
protected:

	int speed = 0;//Скорость
	int mov_time_until_rest = 0;//Кол-во времени в пути до остановки
	std::string cls_name = "NO";//Имя объекта
	double relax = 0;//Время отдыха
};

