#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	double t[999], me = 999;
	int i = 0, j, k, p;
	
	cin >> t[i];
	
	while(t[i] != -1)
	{
		i++;
		cin >> t[i];	
	}
	
	cout << "Classificação: " << endl;
	
	for (j = 0; j < i; j++)
	{
		for(k = 0; k < i; k++)
		{
			if (t[k] < me)
			{
				me = t[k];
				p = k;
			}
		}
		
		cout << p << endl;
		me = 999;
		t[p] = 999;
	}
	
	return 0;
}