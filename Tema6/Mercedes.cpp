#include "Mercedes.h"
using namespace std;

Mercedes::Mercedes()
{
	this->Set_avg_speed(175, 120, 100);
	this->Set_fuel_capacity(60);
	this->Set_fuel_consumption(6);
}

void Mercedes::Set_fuel_capacity(int n)
{
	this->fuel_capacity = n;
}

void Mercedes::Set_fuel_consumption(double cons)
{
	this->fuel_consumption = cons;
}

void Mercedes::Set_avg_speed(int speed_normal, int speed_rain, int speed_snow)
{
	this->avg_speed_normal = speed_normal;
	this->avg_speed_rain = speed_rain;
	this->avg_speed_snow = speed_snow;
}

int Mercedes::get_speed_on_wt_condition(weather w)
{
	if (w == weather::Rain)
		return avg_speed_rain;
	if (w == weather::Sunny)
		return avg_speed_normal;
	if (w == weather::Snow)
		return avg_speed_snow;
	return -1;
}

int Mercedes::get_fuel_capacity()
{
	return fuel_capacity;
}

double Mercedes::get_fuel_consumption()
{
	return fuel_consumption;
}


