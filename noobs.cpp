#include <iostream>
#include <iomanip>

using namespace std;

struct notas
{int nm;
double np1, np2, m;
}
ficha[1];

int main()
{
	cin >> ficha[1].nm >> ficha[1].np1 >> ficha[1].np2;
	ficha[1].m = (ficha[1].np1 * 2 + ficha[1].np2 * 3) / 5;
	cout << "Matricula: " << ficha[1].nm << endl << fixed << setprecision(2) << "Nota 1: " << ficha[1].np1 << endl << "Nota 2: " << ficha[1].np2 << endl << "Media: " << ficha[1].m << endl;
	
	return 0;
}