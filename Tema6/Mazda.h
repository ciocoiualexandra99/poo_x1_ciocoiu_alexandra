#pragma once
#include "Car.h"
#include "weather.h"
class Mazda :public Car
{
public:
	Mazda();
	void Set_fuel_capacity(int);
	void Set_fuel_consumption(double);
	void Set_avg_speed(int, int, int);
	int get_speed_on_wt_condition(weather);
	int get_fuel_capacity();
	double get_fuel_consumption();
};

