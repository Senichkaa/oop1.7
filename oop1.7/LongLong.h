//LongLong.h
#pragma once
#include <string>
#include <iostream>
using namespace std;
class LongLong
{
private:
	long a;
	unsigned long b;
public:
	long get_a() const { return a; };
	unsigned long get_b() const { return b; };
	void set_a(long a) { this->a = a; };
	void set_b(unsigned long b) { this->b = b; };

	void Init(long a, unsigned long b);
	void Display();
	void Read();

	string toString() const;

	friend bool operator > (const LongLong& c1, const LongLong& c2);
	friend bool operator < (const LongLong& c1, const LongLong& c2);
	friend bool operator == (const LongLong& c1, const LongLong& c2);
	friend bool operator != (const LongLong& c1, const LongLong& c2);

	/*friend bool lessthan(LongLong c1, LongLong c2);
	friend bool greatthan(LongLong c1, LongLong c2);
	friend bool equal(LongLong c1, LongLong c2);
	friend bool notequal(LongLong c1, LongLong c2);*/
};