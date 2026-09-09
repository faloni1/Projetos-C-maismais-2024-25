#include <iostream>

using namespace std;

int main()
{
	int n[3][3], i, j, m = 0, f = 0;
	
	int qrm[3][3] = {1, 1, 1, 0, 1, 0, 0, 0, 1};
	int qrf[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			cin >> n[i][j];
	
	cout << endl;	
		
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (n[i][j] != qrm[i][j])
				m++;
			else if (n[i][j] != qrf[i][j])
				f++;
		}
	
	if (m == 0)
		cout << "MASCULINO" << endl;
	else if (f == 0)
		cout << "FEMININO" << endl;
	else
		cout << "ERRO" << endl;	
	   	
     	
	
	
	
	return 0;
}