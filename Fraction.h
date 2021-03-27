#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Fraction
{
private:
	int one;
	unsigned int two;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }

	void setOne(int value) { one = value; }
	void setTwo(unsigned int value) { two = value; }

	Fraction();
	Fraction(int, unsigned int);
	Fraction(const Fraction&);

	operator string() const;
};

