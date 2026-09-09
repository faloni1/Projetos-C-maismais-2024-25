#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n, i;
	char op[999];
	double x[999], y[999], z[999];
	
	do
	cin >> n;
	while (n < 0 || n > 100);
	
	for (i = 0; i < n; i++)
		{cin >> x[i] >> y[i] >> op[i];}
	
	for (i = 0; i < n; i++)
	{	if (op[i] == '+')
			cout << x[i] << " + " << y[i] << " = " << x[i] + y[i] << endl;
		else if (op[i] == '-')
			cout << x[i] << " - " << y[i] << " = " << x[i] - y[i] << endl;
		else if (op[i] == '*')
			cout << x[i] << " * " << y[i] << " = " << x[i] * y[i] << endl;
		else if (op[i] == '/')
		{if (y[i] == 0)
			cout << x[i] << " / " << y[i] << " = Cálculo impossível." << endl;
			else 
			cout << x[i] << " / " << y[i] << " = " << x[i] / y[i] << endl;}	
	}
	
	
	return 0;
} 