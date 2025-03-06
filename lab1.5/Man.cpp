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
    double wigth;

    cout << endl;
    cout << "name =  "; cin >> name;

    do {
        cout << "age =  "; cin >> age;
    } while (age < 0);

    cout << "sex(M/W) =  "; cin >> sex;

    do {
        cout << "wigth =  "; cin >> wigth;
    } while (wigth < 0);

    Init(name, age, sex, wigth);
}
