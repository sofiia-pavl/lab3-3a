#include "Public.h"

ostream& operator << (ostream& out, const Public& a)
{
	out << string(a);
	return out;
}

istream& operator >> (istream& in, Public& a)
{
	int s;
	unsigned int b;
	cout << "First part of number= "; in >> s;
	cout << "Second part of number= "; in >> b;
	cout << endl;
	a.setOne(s);
	a.setTwo(b);
	return in;
}

Public::operator string() const
{
	stringstream ss;
	ss << "First part of number = " << this->getOne() << endl;
	ss << "Second part of number = " << this->getTwo() << endl;

	return ss.str();
}

Public operator - (const Public& a, const Public& b)
{
	Fraction u(a.getOne() - b.getOne(), a.getTwo() - b.getTwo());
	return u;
}

Public& Public:: operator ++()
{
	this->setOne(this->getOne() + 1);
	return *this;
}
Public& Public:: operator --()
{
	this->setOne(this->getOne() - 1);
	return *this;
}
Public Public:: operator ++(int)
{
	Public a(*this);
	this->setOne(this->getOne() + 1);
	return a;
}
Public Public:: operator --(int)
{
	Public a(*this);
	this->setOne(this->getOne() - 1);
	return a;
}
