#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{	
	double P, D, T;
	cin >> D >> P;
	T = D - P;
	cout << fixed << setprecision(2);
	cout << "TROCO = " << T << endl; 
	return 0;
}
