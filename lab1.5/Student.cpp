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
    Man m;
    cout << endl;
    cout << "Man =  " << endl;
    m.Read();

    do {
        cout << "year =  "; cin >> year;
        if (year < 1816 || year > 2025)
            cout << "(1816 - 2025)" << endl;
    } while (year < 1816 || year > 2025);

    Init(year, m);
}
