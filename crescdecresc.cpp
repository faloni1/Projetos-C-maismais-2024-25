#include <iostream>

using namespace std;

int main()
{
	double x, y;
	while (x < y || x > y)
	{
		cin >> x >> y;
		if (x < y)
			cout << "Crescente" << endl;
		else if (x > y)
			cout << "Decrescente" << endl;
	
	}
	
	return 0;
}