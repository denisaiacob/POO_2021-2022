#include <iostream>
#include "Canvas.h"
#include<cstring>
#include <stdlib.h> 
using namespace std;

int main()
{
	Canvas c(20, 20);
	c.Clear();
	c.DrawCircle(10, 10, 3, '*');
	c.FillCircle(10, 10, 3, '*');
	c.Print();
	c.Clear();
	c.SetPoint(19, 19, '*');
	c.Print();
	c.Clear();
	c.DrawRect(14, 14, 18, 18, '#');
	c.FillRect(14, 14, 18, 18, '#');
	c.Print();
	c.Clear();
	c.DrawLine(3, 4, 7, 8, '*');
	c.Print();
	c.Clear();

	return 0;
}
