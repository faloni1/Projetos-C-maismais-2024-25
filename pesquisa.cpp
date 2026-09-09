#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	double n[100];
	int i = 0, x, i2, aux, encontrado = 0, p;

	cin >> aux;
	if (aux == 0)
		return 0;
	
	while (aux != 0)
	{
		n[i] = aux;
		i++;
		cin >> aux;
	}
    
	cin >> x;
    
    for(i2 = 0; i2 < i; i2++)
	{
		if (x == n[i2])
		{encontrado = 1;
		p = i2;}
	}
	
	if(encontrado == 1)
		cout << "Elemento " << x << " encontrado na posição " << p << "." << endl;
 	else
	cout << "Elemento " << x << " não foi encontrado." << endl;
	return 0;
}