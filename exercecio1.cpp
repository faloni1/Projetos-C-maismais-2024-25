#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	long double n;
	int i;
	clock_t inicio, fim;
	
	do
	cin >> n;
	while(n < 2 || n > 1e10);
	
	inicio = clock();
	
	cout << (n * (n + 1)) / 2 << endl;
	
	fim = clock();
	
	cout << "tempo = " << (double)(fim - inicio)/CLOCKS_PER_SEC << " s" << endl; 
	
	return 0;
}