#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	struct jedis
	{
		string nm;
		int b;
	} jd[999];
	int n, i, vf = 0, bp = 0;
	string p;
	
	cout << "Digite o número de jedis a serem cadastrados: ";
	do
	cin >> n;
	while(n < 1 || n > 1000);
	
	for (i = 0; i < n; i++)
	{
		cout << "Digite o nome do jedi: ";
		cin.ignore();
		getline(cin, jd[i].nm);
		
		cout << "Digite a base em que o jedi se encontra: ";
		cin >> jd[i].b;
	}
	
	cout << "Digite o nome do jedi a ser pesquisado: ";
	cin.ignore();
	getline(cin, p);
	
	for (i = 0; i < n; i++)
	{
		if(p == jd[i].nm)
		{
			vf = 1;
			bp = jd[i].b;
		}
	}
	
	if (vf == 1)
		cout << "Esse cavaleiro está na base " << bp << "." << endl;
	else
		cout << "Cavaleiro não cadastrado." << endl;
	
	return 0;
}