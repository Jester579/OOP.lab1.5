#pragma once
#include <string>
using namespace std;
class Man
{
private:
	string name;
	int age;
	string sex;
	double wigth;

public:
	string getName() const { return name; }
	int getAge() const { return age; }
	string getSex() const { return sex; }
	double getWigth() const { return wigth; }

	void setName(string name) { this->name = name; }
	void setAge(int age) { if (age >= 0) this->age = age; }
	void setSex(string sex) { this->sex = sex; }
	void setWigth(double wigth) { if (wigth >= 0) this->wigth = wigth; }

	void Init(string name, int age, string sex, double wigth);
	void Display() const;
	void Read();
};