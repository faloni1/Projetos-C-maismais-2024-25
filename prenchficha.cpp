#include <iostream>

using namespace std;

int main()
{
	string nome, cpf;
	int ano;
	getline (cin, nome) >> cpf >> ano;
	cout << "Nome: " << nome << endl << "CPF: " << cpf << endl << "Nascimento: " << ano << endl;
	
	
	return 0;
}