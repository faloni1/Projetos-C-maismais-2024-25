#include <iostream>
using namespace std;

struct aluno {
	string nm;
	string cr;
	int mat;
} aln[100];

int main()
{
	int n, i, j, aux = -1;
	string x;
	
	cin >> n;
	cin.ignore();
	
	for(i = 0; i < n; i++)
	{
		getline(cin, aln[i].nm);
		getline(cin, aln[i].cr);
		cin >> aln[i].mat;
		cin.ignore();
	}
	
	getline(cin, x);
	
	for(j = 0; j < n; j++)
		if (aln[j].nm == x)
{			aux = j;
			break;
}
					
	if (aux == -1)
			cout << "Aluno nao localizado" << endl;
	else
		{	cout << aln[aux].nm << endl;
			cout << aln[aux].cr << endl;
			cout << aln[aux].mat << endl;
		}	
	
	return 0;
}