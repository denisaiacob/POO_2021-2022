#include "Global.h"
#include "Student.h"
#include <string.h>

int CompareName(Student* s1, Student* s2)
{
	if (strcmp(s1->getName(), s2->getName()) == 0)
		return 0;
	else
		if (strcmp(s1->getName(), s2->getName()) > 0)
			return 1;
		else
			return -1;
}

int CompareMath(Student * s1, Student * s2)
{
	if (s1->getMath() == s2->getMath())
		return 0;
	else
		if (s1->getMath() > s2->getMath())
			return 1;
		else
			return -1;
}

int CompareEnglish(Student * s1, Student * s2)
{
	if (s1->getEnglish() == s2->getEnglish())
		return 0;
	else
		if (s1->getEnglish() > s2->getEnglish())
			return 1;
		else
			return -1;
}

int CompareHistory(Student* s1, Student* s2)
{
	if (s1->getHistory() == s2->getHistory())
		return 0;
	else
		if (s1->getHistory() > s2->getHistory())
			return 1;
		else
			return -1;
}

int CompareAverage(Student* s1, Student* s2)
{
	if (s1->Average() == s2->Average())
		return 0;
	else
		if (s1->Average() > s2->Average())
			return 1;
		else
			return -1;
}