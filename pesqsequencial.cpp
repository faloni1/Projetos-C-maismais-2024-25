#include <iostream>
using namespace std;

int sequencial(int vetor[],int tamanho, int x)
{
	bool achou = false;
	int i=0;
	
	while (achou==false && i<tamanho)
		achou = vetor[i++]==x;
	
	if (achou)
		return (i-1);
	else
		return -1;
}

int main()
{
	int x, n[999], i = 0;
	
	do
	{cin >> n[i];
	if (n[i] != -1)
		i++;
	else
		break;
	}
	while (n[i] != -1);
	
	cin >> x;
		
	if (sequencial(n, i, x) == -1)
		cout << x << " nao encontrado" << endl;
	else
		cout << x << " encontrado na posicao " << sequencial(n, i, x) << endl;
	return 0;
}