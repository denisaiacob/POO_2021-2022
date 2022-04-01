#include "Circuit.h"
#include "Weather.h"
#include<iostream>
using namespace std;

Circuit::Circuit() : length(100), nr_cars(-1), weather(Weather::Sunny)
{

}

void Circuit::SetLength(int length) {
	this->length = length;
}
void Circuit::SetWeather(Weather w) {
	this->weather = w;
}
void Circuit::AddCar(Car* c) {
	if (nr_cars < 100) {
		nr_cars++;
		this->cars[nr_cars] = c;
	}
}
float Circuit::Finish(Car* c) {
	float max = c->GetFuelCapacity() * 100.0f / c->GetFuelConsumption();
	if (max < length)
		return -1;
	else
		return length / c->GetAverageSpeed(this->weather);
}
void Circuit::Race() {
	bool sorted;
	do {
		sorted = true;
		for (int i = 0; i < nr_cars; i++)
		{
			if (Finish(cars[i]) > Finish(cars[i + 1]))
			{
				Car* temp = cars[i];
				cars[i] = cars[i + 1];
				cars[i + 1] = temp;
				sorted = false;
			}
		}
	} while (!sorted);
}
void Circuit::ShowFinalRanks() {
	for (int i = nr_cars; i >= 0; i--) {
		float time = Finish(cars[i]);
		if (time !=-1)
		{
			std::cout << cars[i]->GetName() << " in timpul:" << time<<endl;
		}
	}
	std::cout << "\n";
}
void Circuit::ShowWhoDidNotFinis() {
	for (int i = nr_cars; i >= 0; i--) {
		float time = Finish(cars[i]);
		if (time == -1)
		{
			std::cout << "Nu a terminat:" << cars[i]->GetName();
		}
	}
}