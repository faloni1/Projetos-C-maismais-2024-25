#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
int i,j; // contadores
int chave;
for (j=1;j<tamanho;j++)
{
chave = vetor[j];
i = j-1;
while ((i >= 0) && (vetor[i] < chave))
{
vetor[i+1] = vetor[i];
i = i-1;
}
vetor[i+1] = chave;
}
}

int main()
{
	int v[100], i = 0, j;
	
	while (true)
	{
		cin >> v[i];
		if (v[i] == 0)
			break;
		i++;	
	}
	
	insercaoDireta(v, i);
	
	for(j = 0; j < i; j++)
		{if(j == i)
			cout << v[j] << endl;
		else
			cout << v[j] << " ";}
			  	
	return 0;
}