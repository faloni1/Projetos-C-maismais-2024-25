#include <iostream>
using namespace std;

struct dados
{
	int status;
	int k;
} T[999];

int hash_aux(int k, int m)
{
	if (k < 0 || m < 0)
		return (k % m) + m;
	else 
		return k % m;
}

int hash1(int k, int i, int m) {
    int h = (hash_aux(k, m) + i) % m;
    
    return h;
}

int hash_insert(dados T[], int m, int k)
{
	int i = 0, j = 0;
 	do {
		j = hash1(k,i,m);
   		if (T[j].status != 1){
            T[j].k = k;
            T[j].status = 1;
            return j;
		}
        else
            i++;
	} while (i != m);
    return -1;
}

int hash_search(dados t[], int m, int k)
{
	 int i = 0, j = 0;
    do
	{
		j = hash1(k, i, m);
        if (T[j].k = k)
            return j;
        i++;
	}
    while (T[j].status != 0 && i < m);
    return -1;
}

int main()
{
	int m, x, i = 0, aux;
	
	cin >> m;
	cin >> aux;
	
	while(aux != 0) {
		T[i].k = aux;
		T[i].status = -1;
		cin >> aux;
		i++;
	}
	
	cin >> x;
	
	aux = hash_search(T, m, x);
	
	if (aux != -1)
		cout << "Chave " << x << " encontrada na posicao " << aux << endl;
	else 
		cout << "Chave " << x << " nao encontrada" << endl;
	
	return 0;
}