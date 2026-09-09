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
	int a[10000], n, x, i;
	
	do
	cin >> n;
	while(n < 0 || n > 10000);
	
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
		
	cin >> x;
	
	if(sequencial(a, n, x) == -1)
		cout << "Nao encontrado" << endl;
	else
		cout << "Corredor " << sequencial(a, n, x) << endl;
	
	return 0;
}