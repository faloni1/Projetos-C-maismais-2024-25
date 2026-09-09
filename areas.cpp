#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double A, B, C, AT, AC, ATR, AQ, AR;
	cin >> A >> B >> C;
	AT = (A*C)/2;
	AC = 3.14159 * (C*C);
	ATR = ((A + B) * C) / 2;
	AQ = B * B;
	AR = A * B;
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << AT << endl;
	cout << "CIRCULO: " << AC << endl;
	cout << "TRAPEZIO: " << ATR << endl;
	cout << "QUADRADO: " << AQ << endl;
	cout << "RETANGULO: " << AR << endl;
	
	
	return 0;
}