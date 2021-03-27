#include "Fraction.h"

Fraction::Fraction()
{
	one = 0;
	two = 0;
}

Fraction::Fraction(int a, unsigned int b)
{
	one = a;
	two = b;
}

Fraction::Fraction(const Fraction& r)
{
	one = r.one;
	two = r.two;
}

Fraction::operator string()const
{
	stringstream ss;
	ss << "First part of number = " << one << endl;
	ss << "Second part of number = " << two << endl;

	return ss.str();
}
