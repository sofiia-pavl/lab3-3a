#pragma once
#include "Fraction.h"

class Private :
    private Fraction
{
public:
    Private()
        :Fraction(0, 0)
    {}

    Private(int a,unsigned int b)
        :Fraction(a,b)
    {}

    Private(Fraction& a)
        :Fraction(a.getOne(),a.getTwo())
    {}


    using Fraction::getOne;
    using Fraction::getTwo;
    using Fraction::setOne; 
    using Fraction::setTwo;

    friend ostream& operator << (ostream&, const Private&);
    friend istream& operator >> (istream&, Private&);
    operator string() const;

    friend Private operator - (const Private& a, const Private& b);
    void operator () (Private& a,Private& d)
    {
        if (a.getOne() == d.getOne() && a.getTwo() == d.getTwo()) cout << a.getOne() << "." << a.getTwo() << " = " << d.getOne() << "." << d.getTwo();
        else if (a.getOne() < d.getOne() || a.getOne() == d.getOne() && a.getTwo() < d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " < " << d.getOne() << "." << d.getTwo();
        else if (a.getOne() > d.getOne() || a.getOne() == d.getOne() && a.getTwo() > d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " > " << d.getOne() << "." << d.getTwo();
    }
    Private& operator ++();
    Private& operator --();
    Private operator ++(int);
    Private operator --(int);

};

