#include"Ford.h"

float Ford::GetFuelCapacity() {
	return 400;
}
float Ford::GetFuelConsumption() {
	return 5;
}
float Ford::GetAverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 70;
	else
		if (w == Weather::Rain)
			return 100;
		else
			if (w == Weather::Sunny)
				return 220;
}
const char* Ford::GetName()
{
	return "Ford";
}