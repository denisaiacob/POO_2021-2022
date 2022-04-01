#pragma once
#include "Weather.h"
 class Car {
	
 public:

	 virtual float GetFuelCapacity()=0;
	 virtual float GetFuelConsumption()=0;
	 virtual float GetAverageSpeed(Weather w)=0;
	 virtual const char* GetName() = 0;

};
