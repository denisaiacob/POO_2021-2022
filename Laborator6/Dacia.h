#pragma once
#include "Car.h"

class Dacia:public Car {

public:
	virtual float GetFuelCapacity() override;
	virtual float GetFuelConsumption() override;
	virtual float GetAverageSpeed(Weather w) override;
    virtual const char* GetName() override;
};
