#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double q, p;
	cout << "Digite a quantidade de vendas no mês e o preço atual do produto: ";
	cin >> q >> p;
	cout << fixed << setprecision (2);
	if (q == 0 && p > 0)
		cout << "Novo valor: R$ " << p * 0.90 << " - diminuição de 10% no preço." << endl;
	else if (q > 0 && q <= 500 && p > 0)
		cout << "R$ " << p << " - sem reajuste no preço." << endl;
	else if (q > 0 && q <= 1000 && p > 0)
	    cout << "Novo valor: R$ " << p * 1.10 << " - aumento de 10% no preço." << endl;
	else if (q > 0 && q >= 1000 && p > 0)
		cout << "Novo valor: R$ " << p * 1.15 << " - aumento de 15% no preço." << endl;
	else
		cout << "Erro de entrada" << endl;
	return 0;
}