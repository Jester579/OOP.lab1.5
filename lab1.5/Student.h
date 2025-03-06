#pragma once
#include <string>
#include "Man.h"

using namespace std;
class Student
{
private:
	unsigned int year;
	Man man;
public:
	int getYear() const { return year; }
	Man getMan() const { return man; }
	void setYear(int year) { if (year >= 1816 && year <= 2025) this->year = year; }
	void setMan(Man man) { this->man = man; }

	void Init(int year, Man man);
	void Display() const;
	void Read();
};