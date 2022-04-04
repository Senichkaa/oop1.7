//LongLong.cpp
#include <iostream>
#include <sstream>
#include "LongLong.h"
using namespace std;

void LongLong::Init(long a, unsigned long b)
{
	set_a(a);
	set_b(b);
}

void LongLong::Display()
{
	cout << toString() << endl;
}

void LongLong::Read()
{
	long a;
	unsigned long b;
	cout << endl;
	cout << "a= ?"; cin >> a;
	cout << "b= ?"; cin >> b;
}

string LongLong::toString() const
{
	stringstream s;
	long p[2]{b,a};
	unsigned long long q;
	q = *(unsigned long long*)p;
	s << q;
	return s.str();
}

bool operator > (const LongLong& c1, const LongLong& c2)
{
	return c1.get_a() > c2.get_a() ||
		c1.get_a() == c2.get_a() &&
		c1.get_b() > c2.get_b();
}

bool operator < (const LongLong& c1, const LongLong& c2)
{
	return c1.get_a() < c2.get_a() ||
		c1.get_a() == c2.get_a() &&
		c1.get_b() < c2.get_b();
}

bool operator != (const LongLong& c1, const LongLong& c2)
{
	return c1.get_b() != c2.get_b() ||
		c1.get_a() != c2.get_a();
}

bool operator==(const LongLong& c1, const LongLong& c2)
{
	return c1.get_b() == c2.get_b() ||
		c1.get_a() == c2.get_a();
}
