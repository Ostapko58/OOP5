#include "Man.h"

Man::Man(string name, int age, string sex, double weight)
{
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->weight = weight;	
}

Man::Man()
{
	this->name = "";
	this->age = 0;
	this->sex = "";
	this->weight = 0;
}

void Man::setName(string name)
{
	this->name = name;
}

void Man::setAge(int age)
{
	this->age = age;
}

void Man::setWeight(double)
{
	this->weight = weight;
}

string Man::getName()
{
	return this->name;
}

int Man::getAge()
{
	return this->age;
}

string Man::getSex()
{
	return this->sex;
}

double Man::getWeight()
{
	return this->weight;
}


ostream& operator<<(ostream& out, Man& man)
{
	out << string("name: " + man.name
		+ "\nage: " + to_string(man.age)
		+ "\nsex: " + man.sex
		+ "\nweight: " + to_string(man.weight)+"\n");
	return out;
}

istream& operator>>(istream& in, Man& man)
{
	cout << "name: "; in >> man.name;
	cout << "age: "; in >> man.age;
	cout << "sex: "; in >> man.sex;
	cout << "weight: "; in >> man.weight;
	return in;
}
