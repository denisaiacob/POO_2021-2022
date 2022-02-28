#include "Student.h"
void Student::setName(const char* name)
{
	this->name = name;
}

const char * Student::getName()
{
	return this->name;
}

void Student::setMath(float grade)
{
	this->gradeM = grade;
}

float Student::getMath()
{
	return this->gradeM;
}

void Student::setHistory(float grade)
{
	this->gradeH = grade;
}

float Student::getHistory()
{
	return this->gradeH;
}

void Student::setEnglish(float grade)
{
	this->gradeE = grade;
}

float Student::getEnglish()
{
	return this->gradeE;
}

float Student::Average()
{
	return (gradeM + gradeE + gradeH) / 3.0;
}