#include <iostream>
using namespace std;

void bubbleSort(double vetor[], int tamanho)
{
	int i, j; // contadores
	double trab;
	bool troca;
	int limite;
	troca = true;
	limite = tamanho - 1;
	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
			}
		limite = j;
	}
} 

int main()
{
	double n[999];
	int i = 0, j;
	
	while (true)
	{
		cin >> n[i];
		if (n[i] == -1)
			break;
		i++;
	}
	
	bubbleSort(n, i);
	
	for (j = 0; j < i; j++)
	{
		cout << n[j] << " ";
	}
	return 0;
}