#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double v, r1, r2, r3, i, r;
	cout << "Digite o valor da tensão e dos resistores: " << endl;
	cin >> v >> r1 >> r2 >> r3;
	i = v * ((1 / r1) + (1 / r2) + (1 / r3));
	r  = (1 / r1) + (1 / r2) + (1 / r3);
	cout << "Corrente = " << i;
	cout << fixed << setprecision(4);
	cout <<" Resistência equivalente = " << 1 / r << endl;
	return 0;
}