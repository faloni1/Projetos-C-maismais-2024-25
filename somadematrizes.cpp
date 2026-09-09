#include <iostream>

using namespace std;

int main()
{
	double A[99][99], B[99][99], C[99][99];
	int i, j, n, m;
	
	do
	cin >> n;
	while (n < 0);
	
	do
	cin >> m;
	while (m < 0);
	
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "A [" << i << "]" "[" << j << "] = ";
			cin >> A[i][j];
		}
		
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "B [" << i << "]" "[" << j << "] = ";
			cin >> B[i][j];
		}	
		
	cout << endl << "Matriz A: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		
			cout << A[i][j] << " ";
			cout << endl;
	}
	
	cout << endl << "Matriz B: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		
			cout << B[i][j] << " ";
			cout << endl;
	}
	
	cout << endl << "Soma das matrizes: " << endl;
	for (i = 0; i < m; i++)
	{	
		for (j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}