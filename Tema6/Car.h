
#pragma once

#include <iostream>
#include "weather.h"

class Car
{
protected:
	int fuel_capacity = 0;
	double fuel_consumption = 0;
	int avg_speed_normal = 0;
	int avg_speed_rain = 0;
	int avg_speed_snow = 0;
public:
	virtual void Set_fuel_capacity(int)=0;
	virtual void Set_fuel_consumption(double)=0;
	virtual void Set_avg_speed(int, int, int)=0;
	virtual int get_speed_on_weather_condition(weather)=0;
	virtual int get_fuel_capacity() = 0;
	virtual double get_fuel_consumption() = 0;
};

