
#include "Ford.h"
using namespace std;

Ford::Ford()
{
	this->Set_avg_speed(160, 125, 100);
	this->Set_fuel_capacity(55);
	this->Set_fuel_consumption(5.5);
}

void Ford::Set_fuel_capacity(int n)
{
	this->fuel_capacity = n;
}

void Ford::Set_fuel_consumption(double cons)
{
	this->fuel_consumption = cons;
}

void Ford::Set_avg_speed(int speed_normal, int speed_rain, int speed_snow)
{
	this->avg_speed_normal = speed_normal;
	this->avg_speed_rain = speed_rain;
	this->avg_speed_snow = speed_snow;
}

int Ford::get_speed_on_wt_condition(weather w)
{
	if (w == weather::Rain)
		return avg_speed_rain;
	if (w == weather::Sunny)
		return avg_speed_normal;
	if (w == weather::Snow)
		return avg_speed_snow;
	return -1;
}

int Ford::get_fuel_capacity()
{
	return fuel_capacity;
}

double Ford::get_fuel_consumption()
{
	return fuel_consumption;
}

