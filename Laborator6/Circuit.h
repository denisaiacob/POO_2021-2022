#pragma once
#include "Car.h"
#include"Weather.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Mazda.h"

class Circuit {
	int length;
	Weather weather;
	Car* cars[100];
	int nr_cars;

public:
	Circuit();
	void SetLength(int length);
	void SetWeather(Weather w);
	void AddCar(Car* c);
	void Race();
	float Finish(Car* c);
	void ShowFinalRanks();
	void ShowWhoDidNotFinis();
};
