#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	struct stormtroopers
	{int id;
	double im, fa, ga;}
	indice[999];
	double ma, ma2;
	int n = 0, aux = 1, i;
	
	while(aux != 0)
	{
	cout << "Digite o ID do Stormtrooper: ";
	cin >> indice[n].id;
	
	if (indice[n].id == 0)
		break;
	else
		aux = indice[n].id;
	
	cout << "Digite o índice de maldade do Stormtrooper (0 até 1): ";
	do
	{cin >> indice[n].im;}
	while (indice[n].im < 0 || indice[n].im > 1);	
	
	cout << "Digite a força de abate do Stormtrooper (0 até 1): ";
	do
	{cin >> indice[n].fa;}
	while (indice[n].fa < 0 || indice[n].fa > 1);
	
	indice[n].ga = (indice[n].im + indice[n].fa) / 2;
	n++;}
	
	ma = indice[0].ga;

	for(i = 0; i < n; i++)
	{
	if (indice[i].ga > ma)
	{ma = indice[i].ga;
		ma2 = indice[i].id;}
	}
		
	cout << "Stormtrooper escolhido: " << ma2 << endl;
	cout << "GA: " << ma << endl;
	
	return 0;
}