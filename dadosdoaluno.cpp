#include <iostream>

using namespace std;

int main()
{
	string nome;
	char t;
	double mat, n1, n2;
	cin >> mat; 
    cin.ignore ();
	getline (cin, nome);
	cin >> t;
	cin >> n1 >> n2;
	cout << "Matricula: " << mat << endl << "Media: " << (n1 + n2) / 2 << endl;
	
	
	return 0;
}