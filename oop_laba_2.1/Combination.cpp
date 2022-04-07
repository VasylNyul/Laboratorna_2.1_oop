#include "Combination.h"
#include <sstream>

using namespace std;

Combination::Combination()
{
	first = 0;
	second = 0;

}

Combination::Combination(int f, int s)
{
	if (f > 0 && s > 0 && f < s)
		first = f;
		second = s;

}

Combination::Combination(const Combination& f)
{
	first = f.first;
	second = f.second;
}

Combination& Combination::operator = (const Combination& f)
{
	first = f.first;
	second = f.second;

	return *this;
}

Combination::operator string() const
{
	stringstream ss;
	ss << " k = " << first << endl;
	ss << " n = " << second << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Combination& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Combination& f)
{
	cout << " k = "; in >> f.first; cout  << endl;
	cout << " n = "; in >> f.second; cout << endl;

	return in;
}

Combination operator + (const Combination& x, const Combination& y)
{
	return Combination(x.first + y.first, x.second + y.second);
}

Combination operator - (const Combination& x, const Combination& y)
{
	return Combination(x.first - y.first, x.second - y.second);
}


Combination operator * (const Combination& x, const Combination& y)
{
	return Combination(x.first * y.first - x.second * y.second, x.first * y.second + x.second * y.first);
}

Combination operator / (const Combination& x, const Combination& y)
{
	int f1 = x.first;
	int s1 = x.second;
	int f2 = y.first;
	int s2 = y.second;
	return Combination((f1 * f2 - s1 * s2) / (f2 * f2 + s2 * s2), (-f1 * s2 + s1 * f2) / (f2 * f2 + s2 * s2));
}

Combination operator ^ (const Combination& x, unsigned n)
{
	Combination y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}

Combination& Combination::operator ++()
{
	first++;
	return *this;
}

Combination& Combination::operator --()
{
	first--;
	return *this;
}

Combination Combination::operator ++(int) 
{
	Combination t(*this);
	second++;
	return t;
}

Combination Combination::operator --(int)
{
	Combination t(*this);
	second--;
	return t;
}


int Combination::fact(int i)
{
	if (i == 0)
	{
		return 1;
	}
	else
		return i * fact(i - 1);
}

double Combination::combination()
{
	return fact(second) / (fact(second - first) * fact(first));
};
