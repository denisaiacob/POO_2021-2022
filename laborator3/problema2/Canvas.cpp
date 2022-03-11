#include"Canvas.h"
#include<iostream>
#include <stdlib.h> 
//#include <stdio.h> 
using namespace std;

Canvas::Canvas(int width, int height):m(width), n(height)
{
	char** matrix = (char**)(malloc(height * sizeof(char*)));
	for (int i = 0; i < height; i++)
		matrix[i] = (char*)(malloc(width * sizeof(char)));

}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if ((i - x)*(i - x) + (j - y) * (j - y) >= ray * (ray - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1))
				matrix[i][j] = ch;
			//else
			//	matrix[i][j] = ' ';

}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
	        if(((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray))
	        	matrix[i][j] = ch;
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (j >= left and j <= right and i == top)
				matrix[i][j] = ch;	
			if (j >= left and j <= right and i == bottom)
				matrix[i][j] = ch;
			if (i >= top and i <= bottom and j == left)
				matrix[i][j] = ch;
			if (i >= top and i <= bottom and j == right)
				matrix[i][j] = ch;
		}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (j >= left && j <= right && i >= top && i <= bottom)
				matrix[i][j] = ch;
}
void Canvas::SetPoint(int x, int y, char ch)
{
	matrix[x][y] = ch;
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = x2 - x1;
	int	dy = y2 - y1;
	int yi = 1;
	if (dy < 0)
	{
		yi = -1;
		dy = -dy;
	}	
	int D = (2 * dy) - dx;
		int y = y1;
	for(int x=x1;x<=x2;x++)
	{
			matrix[x][y] = ch;
			if (D > 0)
			{
				y = y + yi;
				D = D + (2 * (dy - dx));
			}
			else
				D = D + 2 * dy;

	}
}
void Canvas::Print() 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << matrix[i][j];
		std::cout << endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = '32';
}