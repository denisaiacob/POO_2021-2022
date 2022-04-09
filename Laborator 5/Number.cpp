#include<iostream>
#include"Number.h"
using namespace std;


Number::Number(const char* value, int base) {
	number = new char[strlen(value) + 1];
	memcpy(number, value, strlen(value));
	number[strlen(value)] = NULL;
	this->base = base;
}
Number::~Number(){
	delete number;
	number = nullptr;
}

int fromCharToInt(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}
char fromIntToChar(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

void transformToBaseB(int n, int b, char* rez)
{
	int index = 0;
	while (n > 0)
	{
		rez[index++] = fromIntToChar(n % b);
		n /= b;
	}
	rez[index] = '\0';

	for (int i = 0; i < strlen(rez) / 2; i++)
	{
		char temp = rez[i];
		rez[i] = rez[strlen(rez) - i - 1];
		rez[strlen(rez) - i - 1] = temp;
	}
}

int transformToBaseTen(const char* c, int b)
{
	int len = strlen(c);
	int Format = 0, P = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		Format += fromCharToInt(c[i]) * P;
		P = P * b;
	}
	return Format;
}

 Number operator + (const Number& n1, const Number& n2) {
	 int rezBase;
	 if (n1.base > n2.base)
		 rezBase = n1.base;
	 else
		 rezBase = n2.base;

	 int first=transformToBaseTen(n1.number, n1.base);
	 int second=transformToBaseTen(n2.number, n2.base);
	
	 int sum = first + second;
	 char* rez;
	 int copie = sum;
	 int nr = 0;
	 while (copie > 0)
	 {
		 copie /= rezBase;
		 nr++;
	 }

	 rez = new char[nr + 2];

	 transformToBaseB(sum, rezBase, rez);
	 Number t(rez, rezBase);
	 return t;
}
 Number operator - (const Number& n1, const Number& n2) {
	 int rezBase;
	 if (n1.base > n2.base)
		 rezBase = n1.base;
	 else
		 rezBase = n2.base;

	 int first = transformToBaseTen(n1.number, n1.base);
	 int second = transformToBaseTen(n2.number, n2.base);

	 int dif = first - second;
	 char* rez;
	 int copie = dif;
	 int nr = 0;
	 while (copie > 0)
	 {
		 copie /= rezBase;
		 nr++;
	 }

	 rez = new char[nr + 2];
	 transformToBaseB(dif, rezBase, rez);
	 Number t(rez, rezBase);
	 return t;
}
void Number::operator -- () {
	strcpy(number, number + 1);
}
void Number::operator -- (int value) {
	number[strlen(number) - 1] = NULL;
}
bool Number::operator > (const Number& n) {
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n.number, n.base);
	if (first > second)
		return true;
	else
		return false;
}
bool Number::operator < (const Number& n) {
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n.number, n.base);
	if (first < second)
		return true;
	else
		return false;
}
bool Number::operator >= (const Number& n) {
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n.number, n.base);
	if (first >= second)
		return true;
	else
		return false;
}
bool Number::operator <= (const Number& n) {
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n.number, n.base);
	if (first <= second)
		return true;
	else
		return false;
}
bool Number::operator == (const Number& n) {
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n.number, n.base);
	if (first == second)
		return true;
	else
		return false;
}

Number& Number::operator = (const Number& n) {
	this->number = new char[strlen(n.number) + 1];
	strcpy(this->number, n.number);
	this->base = n.base;
	return (*this);
}
Number& Number::operator = (int val) {
	char* rez;
	int copie = val;
	int nr = 0;
	while (copie > 0)
	{
		copie /= 10;
		nr++;
	}

	rez = new char[nr + 2];

	transformToBaseB(val, 10, rez);

	number = new char[nr + 2];
	strcpy(this->number, rez);
	this->base = 10;

	return (*this);
}
Number& Number::operator = (const char* n) {
	int index = 0, ok = 1;
	number = new char[strlen(n) + 1];
	strcpy(this->number, n);
	while (n[index] != NULL && ok)
	{
		if (n[index] >= 'A' && n[index] <= 'F')
		{
			this->base = 16;
			ok = 0;
		}
		index++;
	}
	if (ok == 1)
		this->base = 10;

	return (*this);
}

Number& Number::operator += (const Number& n1) {
	int rezBase;
	if (this->base > n1.base)
		rezBase = this->base;
	else
		rezBase = n1.base;
	int first = transformToBaseTen(this->number, this->base);
	int second = transformToBaseTen(n1.number, n1.base);
	int sum = first + second;
	char* rez;
	int copie = sum;
	int nr = 0;
	while (copie > 0)
	{
		copie /= rezBase;
		nr++;
	}

	rez = new char[nr + 2];
	transformToBaseB(sum, rezBase, rez);

	number = new char[nr + 2];
	strcpy(this->number, rez);
	this->base = rezBase;
	return (*this);
}
char& Number::operator [] (int index) {
	return number[index];
}

void Number::SwitchBase(int newBase) {
	int len = strlen(this->number);
	int Format = 0, P = 1;
	// Convertim din baza this->base in baza 10

	for (int i = len - 1; i >= 0; i--)
	{
		Format += fromIntToChar(number[i]) * P;
		P = P * base;
	}



	// Convertim din baza 10 in newBase

	int index = 0;
	char* res;
	int cFormat = Format, nr = 0;
	//numaral cate cifre are numarul in newBase
	while (cFormat > 0)
	{
		cFormat /= newBase;
		nr++;
	}

	res = new char[nr + 2];
	while (Format > 0)
	{
		res[index++] = fromCharToInt(Format % newBase);
		Format /= newBase;
	}
	res[index] = '\0';

	for (int i = 0; i < strlen(res) / 2; i++)
	{
		char temp = res[i];
		res[i] = res[len - i - 1];
		res[len - i - 1] = temp;
	}
	number = new char[nr + 1];
	strcpy(number, res);
	this->base = newBase;
}
void Number::Print() {
std:cout << this->number << " " << this->base;
}
int  Number::GetDigitsCount() {
	return strlen(this->number);
}
int  Number::GetBase() {
	return this->base;
}