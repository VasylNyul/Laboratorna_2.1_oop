#pragma once

#include <iostream>
#include <string>

using namespace std;

class Combination
{
private:

	int first, second;

public:

	Combination();
	Combination(int, int);
	Combination(const Combination&);
	~Combination() { };
	
	void set_k(int value) { first = value; };
	void set_n(int value) { second = value; };
	int get_k() const { return first; };
	int get_n() const { return second; };

	Combination& operator = (const Combination&);
	operator string() const;

	friend ostream& operator << (ostream&, const Combination&);
	friend istream& operator >> (istream&, Combination&);

	friend Combination operator + (const Combination&, const Combination&);
	friend Combination operator - (const Combination&, const Combination&);
	friend Combination operator * (const Combination&, const Combination&);
	friend Combination operator / (const Combination&, const Combination&);
	friend Combination operator ^ (const Combination&, unsigned n);

	Combination& operator ++();
	Combination& operator --();
	Combination operator ++(int);
	Combination operator --(int);
	
	 int fact(int i);
	 double combination();
};

