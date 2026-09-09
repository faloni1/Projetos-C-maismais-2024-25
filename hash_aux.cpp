#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
	if (k < 0 || m < 0)
		return (k % m) + m;
	else 
		return k % m;
}

int main()
{
	int k, m;
	
	do
	{
		cin >> k >> m;
	
	if (k == 0 || m ==0)
		break;
	
	else
	cout << hash_aux(k, m) << endl;}
	while (k != 0 || m != 0);
			
	return 0;
}