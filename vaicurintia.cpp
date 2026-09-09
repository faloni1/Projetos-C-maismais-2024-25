#include <iostream>

using namespace std;

int main()
{
	int n, i, id, m18;
	string nome;
	cin >> n;
	m18 = 0;
	for (i = 1; i <= n; i++)
	{
  	    cin.ignore();
		getline (cin, nome) >> id;
		if (id >= 18)
		   {cout << nome << " " << id << endl;
		m18++;}
	}
		if (m18 == 0)
            cout << "Nenhum jogador com 18 anos ou mais" << endl;
	
	return 0;
}