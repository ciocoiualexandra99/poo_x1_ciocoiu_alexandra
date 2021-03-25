#include "circuit.h"
#include "Dacia.h"
#include "Mazda.h"
#include "Ford.h"
#include "Mercedes.h"
#include "Toyota.h"

int main()
{
	circuit c;
	c.SetLength(10);
	c.SetWeather(weather::Sunny);
	c.AddCar(new Dacia());
	c.AddCar(new Toyota());
	c.AddCar(new Mercedes());
	c.AddCar(new Ford());
	c.AddCar(new Mazda());
	c.Race();
	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit
	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
	return 0;
}
