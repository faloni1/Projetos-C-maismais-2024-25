#include <iostream>
#include <string>

using namespace std;

struct dados
{
	int idade;
	int peso;
};

int main()
{
	dados *pessoa = NULL;
	cout << pessoa << endl;
	pessoa = new dados;
	cout << pessoa << endl;
	pessoa -> idade = 30;
	pessoa -> peso = 70.5;
	cout << "Idade: " << pessoa -> idade << endl;
	cout << "Peso: " << pessoa -> peso << endl;	
	delete pessoa;
	return 0;
}