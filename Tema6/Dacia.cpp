
#include "Dacia.h"
using namespace std;

Dacia::Dacia()
{
	this->Set_avg_speed(127, 106, 94);
	this->Set_fuel_capacity(50);
	this->Set_fuel_consumption(3.5);
}

void Dacia::Set_fuel_capacity(int n)
{
	this->fuel_capacity = n;
}

void Dacia::Set_fuel_consumption(double cons)
{
	this->fuel_consumption = cons;
}

void Dacia::Set_avg_speed(int speed_normal, int speed_rain, int speed_snow)
{
	this->avg_speed_normal = speed_normal;
	this->avg_speed_rain = speed_rain;
	this->avg_speed_snow = speed_snow;
}

int Dacia::get_speed_on_wt_condition(weather w)
{
	if (w == weather::Rain)
		return avg_speed_rain;
	if (w == weather::Sunny)
		return avg_speed_normal;
	if (w == weather::Snow)
		return avg_speed_snow;
	return -1;
}

int Dacia::get_fuel_capacity()
{
	return fuel_capacity;
}

double Dacia::get_fuel_consumption()
{
	return fuel_consumption;
}


