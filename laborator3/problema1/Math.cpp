
#include "Math.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>


int Math::Add(int a, int b)
{
	int sum=0;
	sum = sum + a + b;
	return sum;
}
int Math::Add(int a, int b, int c)
{
	int sum=0;
	sum = sum + a + b+c;
	return sum;
}
int Math::Add(double a, double b)
{
	double sum=0;
	sum = sum + a + b;
	return sum;
}
int Math::Add(double a, double b, double c)
{
	double sum=0;
	sum = sum + a + b+ c;
	return sum;
}
int Math::Mul(int a, int b)
{
	int p = a * b;
	return p;
}
int Math::Mul(int a, int b, int c)
{
	int p = a * b*c;
	return p;
}
int Math::Mul(double a, double b)
{
	double p = a * b;
	return p;
}
 int Math::Mul(double a, double b, double c)
 {
	 double p = a * b * c;
	 return p;
 }
 int Math::Add(int count, ...)
 {
	 int sum = 0;
	 va_list vl;
	 va_start(vl, count);
	 for (int i = 0; i < count; i++)
	 {
		 int val = va_arg(vl, int);
		 sum += val;
	 }
	 va_end(vl);

	 return sum;
 }
 char* Math::Add(const char* a, const char* b)
 {
	 char* add=NULL;
	 int  sizeToRealloc;
	 if (a==nullptr || b==nullptr)
		 return nullptr;
	 else
	 {
		 sizeToRealloc = strlen(a) + strlen(b) + 1;
		 add = (char*)malloc(sizeToRealloc);
		 memset(add, 0, sizeToRealloc);
		 memcpy(add, a, strlen(a));
		 memcpy(add + strlen(a), b, strlen(b));
		 return add;
	 }
 }