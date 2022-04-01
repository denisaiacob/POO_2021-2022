#include"Toyota.h"

	float Toyota::GetFuelCapacity() {
		return 400;
	}
	float Toyota::GetFuelConsumption() {
		return 7;
	 }
	float Toyota::GetAverageSpeed(Weather w)
	{
		if (w == Weather::Snow)
			return 80;
		else
			if (w == Weather::Rain)
				return 100;
			else
				if (w == Weather::Sunny)
					return 200;
	 }
	const char* Toyota::GetName()
	{
		return "Toyota";
	 }
