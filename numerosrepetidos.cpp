#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int na, nb, i, ma, s = 0;
	double vetA[999], vetB[999];
	
	cout << "Digite o número de elementos de A: ";
	cin >> na;
	cout << "Digite os elementos de A: ";
	for (i = 0; i < na; i++)
	{
		do
		cin >> vetA[i];
		while (vetA[i] > 100);
	}
	
	cout << "Digite o número de elementos de B: ";
	cin >> nb;
	cout << "Digite os elementos de B: ";
	for (i = 0; i < nb; i++)
	{
		do
		cin >> vetB[i];
		while (vetB[i] > 100);
	}	

	if (na > nb)
		ma = na;
	else if (nb > na)
		ma = nb;
	else if (nb = na)
		ma = na;
	
	cout << "Elementos repetidos: ";	
    for (i = 0; i < ma; i++)
    	if (vetA[i] == vetB[i]);
		{cout << vetA[i] << endl;
		s++;}
		if (s = 0)
			cout << "nenhum." << endl;
    	
			

	return 0;
}