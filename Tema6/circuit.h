#pragma once
#include "Car.h"

class circuit
{
	int length, nr_of_participants = 0;;
	weather weather1;
	int* scores;
	Car* car[10];
public:
	void SetLength(int);
	void SetWeather(weather);
	void AddCar(Car*);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};


