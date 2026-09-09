#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos)
{
	int i;
	float soma;
	
	for (i = 0; i <nAlunos; i++)
		soma += notas[i];
	
	return soma / nAlunos;
}

int main()
{
	int nt[999], na, i;
	double t;
	
	do
	cin >> na;
	while (na < 1 || na > 100);
	
	for (i = 0; i < na; i++)
	{
		do
		cin >> nt[i];
		while (nt[i] < 0 || nt[i] > 100);
	}
	
	
	cout << "Media da turma = " << fixed << setprecision(2) << media(nt, na) << endl;
	
	return 0;
}