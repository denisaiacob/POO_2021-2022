#include<iostream>
#include "NumberList.h"
using namespace std;

void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (count >= 10)
		return false;
	else
	{
		this->numbers[count] = x;
		this->count++;
		return true;
	}
}
void NumberList::Sort()
{
	int aux;
	for (int i = 0; i < count-1; i++)
		for (int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
			    numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void NumberList::Print()
{
	for (int i = 0; i <count; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << endl;
}