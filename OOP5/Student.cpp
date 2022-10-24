#include "Student.h"

Student::Student()
{
	this->man = Man();
}

Student::Student(Man man, int year)
{
	this->man = man;
	this->year = year;
}

Student::Student(string name, int age, string sex, double weight, int year)
{
	this->man = Man(name, age, sex, weight);
	this->year = year;
}

Man Student::getMan()
{
	return this->man;
}

int Student::getYear()
{
	return this->year;
}

void Student::yearIncrease()
{
	this->year++;
}

void Student::setYear(int year)
{
	this->year = year;
}

void Student::setMan(Man man)
{
	this->man = man;
}

ostream& operator<<(ostream& out, Student& student)
{
	out << student.man << "year: " << student.year<<"\n";
	return out;
}

istream& operator>>(istream& in , Student& student)
{
	in >> student.man;
	cout << "year: "; in >> student.year;
	cout << endl;
	return in;
}
