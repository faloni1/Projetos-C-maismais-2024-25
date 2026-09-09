#include <iostream>

using namespace std;

float calc_delta(float a, float b, float c)
{
	return (b * b) - 4 * a * c;
}

int main()
{
	double a, b, c;
	
	do
	cin >> a;
	while (a == 0);
	
	cin >> b >> c;	

	cout << "delta = " << calc_delta(a, b, c) << endl;	
		
	
	return 0;
}