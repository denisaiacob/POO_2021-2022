#pragma once
class Student {
	const char* name;
	float gradeM;
	float gradeE;
	float gradeH;

public:
	void setName(const char* name);
	const char * getName();
	void setMath(float grade);
	float getMath();
	void setEnglish(float grade);
	float getEnglish();
	void setHistory(float grade);
	float getHistory();
	float Average();


};
