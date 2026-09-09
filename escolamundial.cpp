#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int a, i, ac = 0, ab = 0;
	double n[999], m, s = 0;
	cout << "Digite o número de alunos: ";
	cin >> a;
	for(i = 0; i < a; i++)
	{
		cin >> n[i];
		s += n[i];
		m = s / a;
	}	
    for (i = 0; i < a; i++)
	{if (n[i] >= m)
		{ac++;}
		if (n[i] < m)
		{ab++;}
	}
	
	cout << fixed << setprecision(2) << "Média: " << m << endl << "Alunos acima da média: " << ac << endl << "Alunos abaixo da média: " << ab << endl;
	
	return 0;
}