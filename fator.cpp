#include <iostream>
#include <cmath>

using namespace std;

double fator (int x);

int main()
{
	int n;
	double f;
	
	do
	{cin >> n;}
	while (n < 0);
	
	f = fator(n);
	
	cout << "Fatorial = " << f << endl;
		
	return 0;
}

double fator (int x)
{
	double f;
	int i;
	
 	f = 1;
 	for (i = 2; i <= x; i++)
 		f = f * i;
 	
 	return f;
}