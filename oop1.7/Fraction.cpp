//Fraction.cpp
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "Fraction.h"
using namespace std;

void Fraction::Init(LongLong c, double d)
{
	set_c(c);
	set_d(d);
}

void Fraction::Display() const
{
	cout <<toString() << endl;
}

void Fraction::Read()
{
	LongLong c;
	double d;
	double d1;
	cout << "c= ";
	cin >> d1;
	c.set_a(d1);
	cout << "d= ";
	cin >> d;
	Init(c, d);
}
//856
//0.967565654386346
string Fraction::toString() const
{
	stringstream sout, ss;
	ss <<  d;
	sout << c.toString() <<ss.str().substr(ss.str().find('.'));
	return sout.str();
}

bool operator < (const Fraction& c1, const Fraction& c2)
{
	return c1.get_c() > c2.get_c() ||
		c1.get_c() == c2.get_c() &&
		c1.get_d() > c2.get_d();
}

bool operator > (const Fraction& c1, const Fraction& c2)
{
	return c1.get_c() > c2.get_c() ||
		c1.get_c() == c2.get_c() &&
		c1.get_d() > c2.get_d();
}

bool operator == (const Fraction& c1, const Fraction& c2)
{
	return c1.get_d() == c2.get_d() ||
		c1.get_c() == c2.get_c();
}

bool operator != (const Fraction& c1, const Fraction& c2)
{
	return c1.get_d() != c2.get_d() ||
		c1.get_c() != c2.get_c();
}
