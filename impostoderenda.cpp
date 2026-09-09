#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	double s;
	cout << "Digite o seu salário: ";
	cin >> s;
	cout << fixed << setprecision(2);
	if (s > 2000 && s <=3000)
		cout << "Imposto de renda: R$ " << (s - 2000) * 0.08 << endl;
	else if (s > 3000 && s <= 4500)
		cout << "Imposto de renda: R$ " << 1000 * 0.08 + (s - 3000) * 0.18 << endl;
	else if (s > 4500)
		cout << "Imposto de renda: R$ " << 1000 * 0.08 + 1500 * 0.18 + (s - 4500) * 0.28 << endl;
	else
		cout << "Isento de imposto de renda." << endl;
	
	return 0;
}