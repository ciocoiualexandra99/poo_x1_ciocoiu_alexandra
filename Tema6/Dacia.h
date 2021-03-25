#include "Car.h"
#include "weather.h"
class Dacia:public Car
{
public:
	Dacia();
	void Set_fuel_capacity(int);
	void Set_fuel_consumption(double);
	void Set_avg_speed(int, int, int);
	int get_speed_on_wt_condition(weather);
	int get_fuel_capacity();
	double get_fuel_consumption();
};

