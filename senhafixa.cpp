#include <iostream>

using namespace std;

int main()
{
	int s;
	do
	{
		cin >> s;
		if (s != 2002)
		cout << "Senha Invalida" << endl;
        else
        	cout << "Acesso Permitido" << endl;
	}
	while (s != 2002);	
	return 0;
}