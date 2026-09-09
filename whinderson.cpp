#include <iostream>

using namespace std;

int main()
{
	int n;
	int x[999], ma, me;
	int i;
	ma = 0;
	me = 0;
	do	
	{cin>>n;}
	while(n < 0 || n > 1000);
	
	for(i=0; i < n; i++)
	{
	cin >> x[i];
	}
	
	for(i = 0; i < n; i++)
{ 
	    
		if(x[i] > 10000000)
		{
		ma++;
		}
		if(x[i] < 10000000)
		{
		me++;
		}
}
        cout << ma << " video(s) com mais de 10M views" << endl;
		cout << me << " video(s) com menos de 10M views" << endl;
		return 0;
}