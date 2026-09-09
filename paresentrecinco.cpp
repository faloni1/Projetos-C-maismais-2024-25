#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int n, p = 0, i, x;
	for(i = 1; i <= 5; i++)
	{
		cin >> n;
		x = n % 2;
		if (x == 0)
			p++;
	}
	cout << p << " valores pares" << endl;
	return 0;
}
