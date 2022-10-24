#pragma once
#include<iostream>
#include<string>
using namespace std;
class Man
{
private:
	string name;
	int age;
	string sex;
	double weight;
public:
	Man(string , int , string , double );
	Man();
	void setName(string);
	void setAge(int);
	void setWeight(double);

	string getName();
	int getAge();
	string getSex();
	double getWeight();

	friend ostream& operator << (ostream&, Man&);
	friend istream& operator >> (istream&, Man&);
};

