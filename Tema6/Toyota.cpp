
#include "Toyota.h"
using namespace std;
Toyota::Toyota()
{
	this->Set_avg_speed(132, 109, 93);
	this->Set_fuel_capacity(50);
	this->Set_fuel_consumption(3.5);
}

void Toyota::Set_fuel_capacity(int n)
{
	this->fuel_capacity = n;
}

void Toyota::Set_fuel_consumption(double cons)
{
	this->fuel_consumption = cons;
}

void Toyota::Set_avg_speed(int speed_normal, int speed_rain, int speed_snow)
{
	this->avg_speed_normal = speed_normal;
	this->avg_speed_rain = speed_rain;
	this->avg_speed_snow = speed_snow;
}

int Toyota::get_speed_on_wt_condition(weather w)
{
	if (w == weather::Rain)
		return avg_speed_rain;
	if (w == weather::Sunny)
		return avg_speed_normal;
	if (w == weather::Snow)
		return avg_speed_snow;
	return -1;
}

int Toyota::get_fuel_capacity()
{
	return fuel_capacity;
}

double Toyota::get_fuel_consumption()
{
	return fuel_consumption;
}



