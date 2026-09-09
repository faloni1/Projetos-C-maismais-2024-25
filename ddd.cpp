#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	setlocale (LC_ALL, "Portuguese");
	int ddd;
	cout << "Digite o DDD: ";
	cin >> ddd;
	switch(ddd)
	{
		case 61:
			cout << "DDD 61: Brasília." << endl;
			break;
		case 71:
			cout << "DDD 71: Salvador." << endl;
			break;
		case 11:
			cout << "DDD 11: São Paulo." << endl;
			break;
		case 21:
			cout << "DDD 21: Rio de Janeiro." << endl;
			break;
		case 32:
			cout << "DDD 32: Juiz de Fora." << endl;
			break;
		case 19:
			cout << "DDD 19: Campinas." << endl;
			break;
		case 27:
			cout << "DDD 27: Vitória." << endl;
			break;
		case 31:
			cout << "DDD 31: Belo Horizonte." << endl;
			break;
		default:
			cout << "DDD não cadastrado." << endl;
	}
	return 0;
}