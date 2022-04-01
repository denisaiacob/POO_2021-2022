#include"Dacia.h"

float Dacia::GetFuelCapacity() {
	return 100;
}
float Dacia::GetFuelConsumption() {
	return 6;
}
float Dacia::GetAverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 50;
	else
		if (w == Weather::Rain)
			return 100;
		else
			if (w == Weather::Sunny)
				return 150;
}
const char* Dacia::GetName()
{
	return "Dacia";
}