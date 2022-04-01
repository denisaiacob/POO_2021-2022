#include"Mazda.h"
#include"Weather.h"

float Mazda::GetFuelCapacity() {
	return 380;
}
float Mazda::GetFuelConsumption() {
	return 6;
}
float Mazda::GetAverageSpeed(Weather w)
{
	if (w == Weather::Snow)
		return 70;
	else
		if (w == Weather::Rain)
			return 110;
		else
			if (w == Weather::Sunny)
				return 220;
}
const char* Mazda::GetName()
{
	return "Mazda";
}