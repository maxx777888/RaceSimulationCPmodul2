#include "AirRace.h"
#include<iostream>

double AirRace::race_start(int distance)
{
	double distanceRace = 0.0; //Переменная дистанция гонки с типом Double
	//Расчет расстояния гонки за вычетом коэффициента сокращения
	distanceRace = static_cast<double>(distance) * (1 - dist_reduction_Air(distance));
	//Время за которое транспортное средство закончит гонку
	moving_time_air = distanceRace / speed_air;
	return moving_time_air;
}

std::string AirRace::get_name()
{
	return cls_name;
}
