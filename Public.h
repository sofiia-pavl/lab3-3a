#pragma once
#include "Fraction.h"

class Public :
    public Fraction
{
    Public()
        :Fraction(0, 0)
    {}

    Public(int a = 0, unsigned int b = 0)
        :Fraction(a, b)
    {}

    Public(Fraction& a)
        :Fraction(a.getOne(), a.getTwo())
    {}

    friend ostream& operator << (ostream&, const Public&);
    friend istream& operator >> (istream&, Public&);
    operator string() const;

    friend Public operator - (const Public& a, const Public& b);
    void operator () (Public& a, Public& d)
    {
        if (a.getOne() == d.getOne() && a.getTwo() == d.getTwo()) cout << a.getOne() << "." << a.getTwo() << " = " << d.getOne() << "." << d.getTwo();
        else if (a.getOne() < d.getOne() || a.getOne() == d.getOne() && a.getTwo() < d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " < " << d.getOne() << "." << d.getTwo();
        else if (a.getOne() > d.getOne() || a.getOne() == d.getOne() && a.getTwo() > d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " > " << d.getOne() << "." << d.getTwo();
    }
    Public& operator ++();
    Public& operator --();
    Public operator ++(int);
    Public operator --(int);

};

