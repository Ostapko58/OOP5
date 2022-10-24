#pragma once
#include "Man.h"
class Student
{
private:
	Man man;
	int year;
public:
	Student();
	Student(Man, int);
	Student(string, int, string, double, int);

	Man getMan();
	int getYear();
	
	void setYear(int);
	void setMan(Man);

	void yearIncrease();

	friend ostream& operator << (ostream&, Student&);
	friend istream& operator >> (istream&, Student&);
};

