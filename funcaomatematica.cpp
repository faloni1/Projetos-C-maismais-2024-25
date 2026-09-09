#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double f, x, y;
	cout << "Digite os valores de x e y: ";
	cin >> x >> y;
	if (x == y)
		cout << "Impossível, divisão por zero." << endl;
	else if (x < 0 || y < 0)
		cout << "Impossível, número negativo." << endl;
	else 
	{
		f =  ((x * x * x) - sqrt(y)) / ((y * y * y) - sqrt(x));
		cout << fixed << setprecision(4);
		cout << "f (x, y) = " << f << endl;
	}
	return 0;
}