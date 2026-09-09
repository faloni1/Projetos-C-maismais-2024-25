#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	struct pontos
	{
	string nm;
	int p;
	} pdwn[999];
	int n, i, map;
	string man;
	double t;
	
	cout << "Digite o número de padawans a serem cadastrados: ";
	do
	cin >> n;
	while(n < 1 || n > 1000);
	
	for(i = 0; i < n; i++)
	{
		cout << "Digite o nome do padawan: ";
		cin.ignore();
		getline(cin, pdwn[i].nm);
		
		cout << "Digite a pontuação do padawan: ";
		cin >> pdwn[i].p;
		t += pdwn[i].p;
	}
	
	 man = pdwn[0].nm;
	 map = pdwn[0].p;
	 
	 for (i = 0; i < n; i++)
	 {
	 	if (pdwn[i].p > map)
		 {
		 	map = pdwn[i].p;
		 	man = pdwn[i].nm;	
		 }
	 }
	 
	cout << "Padawan com mais pontos: " << man << endl;
	cout << "Pontos: " << map << endl;
	cout << "Média da turma: " << fixed << setprecision (2) << t / n << endl;
	
	return 0;
}