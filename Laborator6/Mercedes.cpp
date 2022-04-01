#include"Mercedes.h"

float Mercedes::GetFuelCapacity() {
	return 450;
}
float Mercedes::GetFuelConsumption() {
	return 9;
}
float Mercedes::GetAverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 80;
	else
		if (w == Weather::Rain)
			return 120;
		else
			if (w == Weather::Sunny)
				return 250;
}
const char* Mercedes::GetName()
{
	return "Mercedes";
}