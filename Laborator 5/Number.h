#pragma once
class Number
{
    char* number;
	int base;

public:
	Number(const char* value, int base);
	~Number();

	Number(const Number& n) {
		this->base = n.base;
		this->number = new char[strlen(n.number) + 1];
		this->number = n.number;
	}
	Number(Number&& n) {
		number = n.number;
		n.number = nullptr;
		this->base = base;
	}

	 Number friend operator + (const Number& n1, const Number& n2);
	 Number friend operator - (const Number& n1, const Number& n2);
	void operator -- ();
	void operator -- (int value);
	bool operator > (const Number& n);
	bool operator < (const Number& n);
	bool operator >= (const Number& n);
	bool operator <= (const Number& n);
	bool operator == (const Number& n);

	Number& operator = (const Number& n);
	Number& operator = (int val);
	Number& operator = (const char* n);

	Number& operator += (const Number& n1);
	char& operator [] (int index);



	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
}; 
