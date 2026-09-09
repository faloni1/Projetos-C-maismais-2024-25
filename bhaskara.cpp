#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double a, b, c, d;
	cout << "Digite 3 valores: ";
	cin >> a >> b >> c;
	cout << fixed << setprecision(5);
	d = b*b-4*a*c;
	if (d < 0 || a == 0)
		cout << "Impossível calcular." << endl;
	else
        cout << "Raíz 1 = " << (-b + sqrt(d)) / (2 * a) << endl << "Raíz 2 = " << (-b - sqrt(d)) / (2 * a) << endl;
		
	
	return 0;
}