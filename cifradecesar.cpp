#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n, m, i, j;
	char msg[50][50];
	
	cin >> n >> m;
	
	cin.ignore();
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> msg[i][j];
		
	cout << endl;	
	
	for (j = 0; j < m; j++)
		for (i = 0; i < n; i++)
			cout << msg[i][j];
	
	return 0;
}