#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double n1, n2, s;
	cout << "Digite os números que deseja realizar a operação: ";
	cin >> n1 >> n2;
	cout << "Digite o tipo de operação: 1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão." << endl;
	cin >> s;
	if (s == 1)
		cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	if (s == 2)
		cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	if (s == 3)
		cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	if (s == 4) 
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	
	return 0;
}