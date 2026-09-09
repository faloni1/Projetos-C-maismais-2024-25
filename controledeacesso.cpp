#include <iostream>
using namespace std;

int binaria(int vetor[],int tamanho, int x)
{
	bool achou; 
	int baixo, meio, alto; 
	baixo = 0;
	alto = tamanho-1;
	achou = false;
	
	while ((baixo <= alto) && (achou == false))
	{
	meio = (baixo + alto) / 2;
	if (x < vetor[meio])
		alto = meio - 1;
	else
		if (x > vetor[meio])
			baixo = meio + 1;
	else
		achou = true;
	}
	
	if (achou)
		return meio;
	else
		return -1;
}

int main()
{
	int ids[20], id, i = 0;
	
	do
	{
		cin >> ids[i];
	 	if (ids[i] != -1)
	 		i++;
	 	else
	 		break;
	} while (i < 20 || ids[i] != -1);	
	
	cin >> id;
	
	if (binaria(ids, i, id) == -1)
		cout << "Nao possui acesso" << endl;
	else 
		cout << "Possui acesso" << endl;
	
	return 0;
}