#include <iostream>
using namespace std;

struct Alunos {
	string nome;
	int mat;
} aluno[999];

int binaria(Alunos aluno[], int tamanho, string x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < aluno[meio].nome)
			alto = meio - 1;
		else if (x > aluno[meio].nome)
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}

int main()
{

int i = 0;
int aux;
string x;

while (true)
{
getline(cin, aluno[i].nome);
if (aluno[i].nome == "fim")
	break;
cin >> aluno[i].mat;
cin.ignore();
i++;
}

getline(cin, x);
	
aux = binaria(aluno, i, x);
if (aux == -1)
	cout << "Aluno nao encontrado" << endl;
else 
	cout << "Aluno: " <<  aluno[aux].nome << endl << "Matricula: " << aluno[aux].mat << endl;
	
	
	return 0;
}
