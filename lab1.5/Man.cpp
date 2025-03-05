#include "Man.h"
#include <iostream>
using namespace std;
void Man::Init(string name, int age, string sex, double wigth) {
	setName(name);
	setAge(age);
	setSex(sex);
	setWigth(wigth);
}

void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "sex = " << sex << endl;
	cout << "wigth = " << wigth << endl;

}
void Man::Read()
{
	string name;
	int age;
	cout << endl;
	cout << "name =  "; cin >> name;
	cout << "age =  "; cin >> age;
	cout << "sex(M/W) =  "; cin >> sex;
	cout << "wigth =  "; cin >> wigth;
	Init(name, age, sex, wigth);
}