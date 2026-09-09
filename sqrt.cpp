#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double raiz(double x, double x0, double e) 
{
	double x0ao2 = x0 * x0;
	double nx0 = (x0 * x0 + x) / (2 * x0);
	if (fabs(x0ao2 - x) <= e)
		return x0;
	else
		return  raiz(x, nx0, e); 
}

int main()
{
	double x, x0, e;
	
	do
	cin >> x >> x0 >> e;
	while (x < 0 || x0 < 0 || e < 0);
	
	
	cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;		
		
	return 0;
}