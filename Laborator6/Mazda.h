#pragma once
#include "Car.h"
#include"Weather.h"

class Mazda :public Car {

public:
	virtual float GetFuelCapacity() override;
	virtual float GetFuelConsumption() override;
	virtual float GetAverageSpeed(Weather w) override;
	virtual const char* GetName() override;
};
