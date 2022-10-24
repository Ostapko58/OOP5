#include <iostream>
#include"Student.h"
using namespace std;

int main()
{
	Man ostap("Ostap", 18, "Male", 66.3);
	cout << ostap << endl;
	Student st1(ostap, 2021);
	cout << st1 << endl;
	cin >> st1;
	cout << st1 << endl;
}
