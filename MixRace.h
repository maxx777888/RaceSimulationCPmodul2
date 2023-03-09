#pragma once
#include "string"

class MixRace //Класс для проведения смешенных гонок. 
{
public:
	//Виртуальный метод возвращает время гонки объекта
	virtual double race_start(int dis) = 0;
	//Виртуальный метод возвращает имя объекта
	virtual std::string get_name() = 0;

};

