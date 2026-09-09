#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n, i, l = 0, d = 0, nota[999];
	
	cout << "Digite o número de avaliações: ";
	
	do
	{cin >> n;}
	while (n < 0 || n > 1000); 
    
	cout << "Digite as notas: ";
		for(i = 1; i <= n; i++)
		{
			do
			{cin >> nota[i];}
			while (nota[i] > 1 || nota[i] < -1 || nota[i] == 0);	
				
			if (nota[i] == 1)
				l++;
			else if (nota[i] == -1)
				d++;	
		}
    if (l > d)
    	cout << "A maioria gostou" << endl;
    else if (d > l)
    	cout << "A maioria nao gostou" << endl;
    else
    	cout << "Empate" << endl;
    
		
	

	return 0;
}