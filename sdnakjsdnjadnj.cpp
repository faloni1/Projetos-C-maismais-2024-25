#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
};

// Função para ordenar os alunos pelo nome (usando bubble sort para simplicidade)
void ordenarPorNome(Aluno alunos[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (alunos[j].nome > alunos[j + 1].nome) {
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

// Busca binária modificada para procurar pelo nome
int buscaBinaria(Aluno alunos[], int tamanho, string nomeBuscado) {
    int baixo = 0;
    int alto = tamanho - 1;

    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;
        if (nomeBuscado < alunos[meio].nome) {
            alto = meio - 1;
        } else if (nomeBuscado > alunos[meio].nome) {
            baixo = meio + 1;
        } else {
            return meio; // nome encontrado
        }
    }

    return -1; // não encontrado
}

int main() {
    const int MAX = 100;
    Aluno alunos[MAX];
    int quantidade = 0;
    string nome;
    
    // Entrada de dados
    while (true) {
        getline(cin, nome);
        if (nome == "fim")
            break;
        alunos[quantidade].nome = nome;
        cin >> alunos[quantidade].matricula;
        cin.ignore(); // limpa o buffer do '\n'
        quantidade++;
    }

    // Nome a ser buscado
    string nomeBusca;
    getline(cin, nomeBusca);

    // Ordena os alunos por nome
    ordenarPorNome(alunos, quantidade);

    // Busca o aluno pelo nome
    int pos = buscaBinaria(alunos, quantidade, nomeBusca);
    if (pos != -1) {
        cout << "Aluno: " << alunos[pos].nome << endl;
        cout << "Matricula: " << alunos[pos].matricula << endl;
    } else {
        cout << "Aluno nao encontrado" << endl;
    }

    return 0;
}
