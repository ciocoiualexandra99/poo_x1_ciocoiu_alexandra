#include "Mazda.h"
#include "weather.h"
using namespace std;

Mazda::Mazda()
{
	this->Set_avg_speed(190, 136, 105);
	this->Set_fuel_capacity(40);
	this->Set_fuel_consumption(6.5);
}

void Mazda::Set_fuel_capacity(int n)
{
	this->fuel_capacity = n;
}

void Mazda::Set_fuel_consumption(double cons)
{
	this->fuel_consumption = cons;
}

void Mazda::Set_avg_speed(int speed_normal, int speed_rain, int speed_snow)
{
	this->avg_speed_normal = speed_normal;
	this->avg_speed_rain = speed_rain;
	this->avg_speed_snow = speed_snow;
}

int Mazda::get_speed_on_wt_condition(weather w)
{
	if (w == weather::Rain)
		return avg_speed_rain;
	if (w == weather::Sunny)
		return avg_speed_normal;
	if (w == weather::Snow)
		return avg_speed_snow;
	return -1;
}

int Mazda::get_fuel_capacity()
{
	return fuel_capacity;
}

double Mazda::get_fuel_consumption()
{
	return fuel_consumption;
}


