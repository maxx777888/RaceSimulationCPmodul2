#pragma once
#include <string>
#include "MixRace.h"
class AirRace : public MixRace
{
public:
	//Метод для посчитывает коэффициент сокращения расстояния
	virtual double dist_reduction_Air(int distance) = 0;
	//Метод для расчета времени гонки 
	double race_start(int distance);
	//Метод для получения имени объекта
	std::string get_name();

protected:

	int speed_air = 0; //Скорость
	double moving_time_air = 0.0;//Кол-во времени в пути
	std::string cls_name;//Имя объекта
};

