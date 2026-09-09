#include <iostream>
using namespace std;

struct Gladiador {
		string nome;
		int forca;
		int hab;
		int id;
	} glad[5];
	
bool combate (int g1, int g2) {
	int dano1 = glad[g1].forca + 2 ^ glad[g1].hab;
	int dano2 = glad[g2].forca + 2 ^ glad[g2].hab;
	
	if (dano1 > dano2)
		return true;
	else 
		return false;
	 
}

int main()
{	
	int n, g1, g2, i1, i2;
	bool vd;
	
	for (n = 0; n < 5; n++) {
		
		cin.ignore();
		getline (cin, glad[n].nome);
		
		do
		cin >> glad[n].forca;
		while (glad[n].forca < 0 || glad[n].forca > 10);
		
		do
		cin >> glad[n].hab;
		while (glad[n].hab < 0 || glad[n].hab > 10);
		
		cin >> glad[n].id;
	}
	
	do {
	cin >> i1 >> i2;
	vd = combate(i1, i2);
	
	if (i1 == -1 || i2 == -1)
		break;
	
	if (vd)
		cout << glad[i2].nome << " ganhou de " << glad[i1].nome << endl;
	else
		cout << glad[i1].nome << " ganhou de " << glad[i2].nome << endl;}
	while (true);
	   	
	   	
	return 0;
}