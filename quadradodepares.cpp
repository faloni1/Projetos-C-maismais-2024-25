#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int N, pn, i, p;
	cin >> N;
	pn = N / 2;
	p = pn - (pn - 2);
    for(i = 1; i <= pn; i++)
	{
		cout << p << "^2 = " << fixed << setprecision (0) << pow (p, 2) << endl;
		p = p + 2;
	}
    	
	
	return 0;
}