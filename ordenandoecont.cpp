#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho, int &cont, int trab2[])
{
	int i,j; 
	int trab;
	bool troca;
	int limite;
	troca = true;
	limite = tamanho-1;
	cont = 0;
	
	while (troca)
{
		troca = false;
		for (i=0;i<limite;i++)
			if (vetor[i] > vetor[i+1])
{
	
	trab = vetor[i];
	trab2[cont] = trab;
	vetor[i] = vetor[i+1];
	vetor[i+1] = trab;
	j = i;
	troca = true;
	if (troca)
		cont++;
}
	limite = j;
}
}

int main()
{
	int v[100], n, i, j, trab2[100], cont = 0;
	
	cin >> n;
	
	for (i = 0; i < n; i++)
		cin >> v[i];
	
	bubbleSort(v, i, cont, trab2);
	
	for (j = 0; j < cont; j++)
		cout << "New trab:" << trab2[j] << endl;
	
	cout << "Contador:" << cont << endl;
		
	
	return 0;
}