#include <iostream>

using namespace std;

int main()
{
	double x, y[11];
	int i;
	
	cin >> x;
	
	for(i = 0; i <= 10; i++)
	{
		y[i] = x * i;
		cout << x << " x " << i << " = " << y[i] << endl;
	}
	
	return 0;
}