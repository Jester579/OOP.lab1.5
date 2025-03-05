#include "Student.h"
#include <iostream>
using namespace std;
void Student::Init(int year, Man man)
{
	setYear(year);
	setMan(man);
}
void Student::Display() const {
	cout << endl;
	cout << "Student Information: " << endl;
	man.Display();
	cout << "Year of study: " << year << endl;
}

void Student::Read()
{
	string spec;
	Man m;
	cout << endl;
	cout << "Man =  " << endl;
	m.Read(); 
	cout << "year =  "; cin >> year;
	Init(year, m);
}