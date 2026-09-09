#include <iostream>
#include <iomanip>	
#include <cmath>	

using namespace std;

int main(int argc, char** argv)
{
	double M, P, BASE, CI, TJ, TA, L;
	cin >> CI >> TJ >> TA;
	P = TJ / 100;
	BASE = 1 + P;
	M = CI * pow(BASE, TA); 
	L = M - CI;
	cout << fixed << setprecision(2);
	cout << "LUCRO = " << L << endl;
	
	return 0;
}