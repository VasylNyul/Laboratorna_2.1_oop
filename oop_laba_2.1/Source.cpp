#include <iostream>
#include "Combination.h"


int main()
{
	Combination c(3, 5);
	
	cout << c++ << endl; 
	cout << c   << endl; 
	cout << ++c << endl; 
	cout << c   << endl;

	cin >> c;

	cout << "Moi zusla:" << endl;  
	cout << c << endl;

	cout << "C(n,k)=" << c.combination() << endl;
	/*/
	int res; res = c.fact(c.get_n()) / (c.fact( c.get_n() - c.get_k() ) * c.fact(c.get_k()) );
	cout << "Combination = " << res;
	*/
	return 0;
}