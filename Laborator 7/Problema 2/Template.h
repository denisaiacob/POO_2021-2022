#pragma once
#include <malloc.h>
#include<iostream>
using namespace std;

template<typename T>
int functieDeComparare1(T a, T b)
{
	if (a > b)
		return a;
	else 
		return b;
}

template<typename T>
int functieDeComparare2(T a,T b) {
	if (a == b)
		return true;
}

template <class T>

class Vector {
	T* vector;
	int count;
	int dimensiune;
	int memorieCurenta;
	int memorieAlocata;

public:
	Vector() {
		dimensiune = 100;
		count = -1;
		vector = new T[dimensiune];
	}

	void push(T element) {
		if (count+1 < dimensiune) {
			count++;
			vector[count] = element;
		}
		else
		{
			dimensiune = 2 * dimensiune;
			T* reSize = new T[dimensiune];
			memcpy(reSize, vector, dimensiune / 2);
			delete[]vector;
			vector = reSize;
			count++;
			vector[count] = element;
		}
	}

	T pop() {
		return vector[count];
	}

	void remove(int index) {
		if (index <= count) {
			for (int i = index; i < count; i++)
				vector[i] = vector[i + 1];
			count--;
		}
		else
			std:cout << "NU EXISTA";
	}

	void insert( T element,int index) {
		if (count + 1 < dimensiune && index<count) {
			dimensiune = 2 * dimensiune;
			T* reSize = new T[dimensiune];
			memcpy(reSize, vector, dimensiune / 2);
			delete[]vector;
			vector = reSize;
		}
		if (index <= count) {
			for (int i = count+1; i > index; i--) {
				vector[i] = vector[i-1];
			}
			vector[index] = element;
			count++;
		}
		else
			std:cout << "NU EXISTA";

	}

    int get(T element) {

		for (int i = 0; i <= count; i++) {
			if (vector[i] == element)
				return (const T&)this->vector[i];
		}
	}

	void set(T element, int index) {
		if (index <= count)
			vector[index] = element;
		else
			if (index == count + 1) {
				count++;
				vector[count] = element;
			}
			else
			std:cout << "NU EXISTA";
	}

	int countMethod() {
		return this->count++;
	}

	void print() {
		for (int i = 0; i <= count; i++) {
		std:cout << vector[i] << " ";
		}
	}

	void sort(int (*callback)(T, T)) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j <= count; j++) {
				if (callback != nullptr) {
					if (callback(vector[i], vector[j]) == vector[j])
						swap(vector[i], vector[j]);
				}
				else
				if(this->vector[j] < this->vector[i])
					swap(vector[i], vector[j]);
			}
		}
	}

	int firstIndexOf (functieDeComparare2, T val) {

		for (int i = 0; i <= count; i++) {
			if (callback != nullptr) {
				if (callback(vector[i], val) == true)
					return i;
			}
			else
				if (this->vector[i] == val)
					return i;
		}
	}


};
 