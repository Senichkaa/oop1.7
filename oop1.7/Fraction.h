//Fraction.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "LongLong.h"

class Fraction
{
private:
	LongLong c;
	double d;
public:
	void set_c(LongLong c) { this->c = c; };
	void set_d(double d) { this->d = d; };
	LongLong get_c() const { return c; };
	double get_d() const { return d; };
	void Init(LongLong c, double d);
	void Display() const;
	void Read();

	string toString() const;

	friend bool operator > (const Fraction& c1, const Fraction& c2);
	friend bool operator < (const Fraction& c1, const Fraction& c2);
	friend bool operator == (const Fraction& c1, const Fraction& c2);
	friend bool operator != (const Fraction& c1, const Fraction& c2);

	/*friend bool lessthan(Fraction c1, Fraction c2);
	friend bool greatthan(Fraction c1, Fraction c2);
	friend bool equal(Fraction c1, Fraction c2);
	friend bool notequal(Fraction c1, Fraction c2);*/

};
