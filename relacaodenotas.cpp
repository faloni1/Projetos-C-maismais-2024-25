#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N, n[999], i, t = 0, m = 0, ma = 0, me = 0; 
	
	do
	{cin >> N;}
	while (N > 10 || N < 0);
	
	for(i = 0; i < N; i++)
	{
		cin >> n[i];
		t += n[i];	
	}
	m = t / N;
    
	cout << "Média dos elementos: " << m << endl;
	
	ma = n[0];
	for(i = 0; i < N; i++)
	{
		if (n[i] > ma)
			ma = n[i];
	}
	cout << "Maior elemento: " << ma << endl;
	
	me = n[0];
	for(i = 0; i < N; i++)
	{
		if (n[i] < me)
			me = n[i];
	}
	cout << "Menor elemento: " << me << endl;
	
	cout << "Elementos maiores que a média/posição: " << endl;
	for(i = 0; i < N; i++)
	{
		if(n[i] > m)
			cout << n[i] << "/" << i << endl;
	}
	
	cout << "Elementos menores que a média/posição: " << endl;
	for (i = 0; i < N; i++)
	{
		if (n[i] < m)
			cout << n[i] << "/" << i << endl;
	}
	
	
	
    return 0;
}