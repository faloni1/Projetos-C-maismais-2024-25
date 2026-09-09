#include <iostream>
using namespace std;

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + soma(n - 1);
}

int main()
{
	int x;
	
	do
	cin >> x;
	while (x < 0);
	
	cout << "soma = " << soma(x) << endl;
	
	return 0;
}