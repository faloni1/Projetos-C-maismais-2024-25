#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double t, x;
	cout << "Digite o valor de t: ";
	cin >> t;
	if (t == 1 || t < 1 || t == -1)
	   {x = 1 - fabs(t);
	    cout << "x(t) = " << x << endl;}
	else 
	    cout << "x(t) = 0" << endl;
	return 0;
}