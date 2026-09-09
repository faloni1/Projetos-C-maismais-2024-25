#include <iostream>

using namespace std;

int main()
{
	int n;
	int x[999], ma, me;
	int i;
	
	do	
	{cin>>n;}
	while(n < 0 || n > 1000);
	
	for(i=0; i < n; i++)
	{
	cin >> x[i];
	}
	
	ma = x[0];
	me = x[0];
	
	for(i = 0; i < n; i++)
{ 
	    
		if(x[i] > ma)
		{
		ma = x[i];
		}
		if(x[i] < me)
		{
		me = x[i];
		}
}
        cout << "Menor numero de contatos: "<< me <<endl;
		cout << "Maior numero de contatos: "<< ma <<endl;
		return 0;
}