#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, n, i, p;
	double np, nn;
	cin >> N;
	if (N < 10000 && N > 0)
	for(i = 1; i <= N; i++)
	{
		cin >> n;
		np = pow (10, 7);
		nn = np * (-1);
        p = n % 2;
		if(p == 0 && n > 0 && n < np)
			cout << "EVEN POSITIVE" << endl;
		else if (p == 0 && n < 0 && n > nn)
			cout << "EVEN NEGATIVE" << endl;
		else if (p > 0 || p < 0 && n > 0 && n < np)
			cout << "ODD POSITIVE" << endl;
		else if (p > 0 || p < 0 && n < 0 && n > nn)
			cout << "ODD NEGATIVE" << endl;
		else if (n <= nn || n >= np)
			cout << "O valor excede o limite (10 ^ 7 > valor > -10 ^ 7)." << endl;
		else 
			cout << "NULL" << endl;
		 
		
	}
	else 
		cout << "O valor excede o limite (10000 > valor > 0)." << endl;

	return 0;
}