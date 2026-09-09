#include <iostream>

using namespace std;

float ideal(float h, char sexo)
{
	if (sexo == 'm' || sexo == 'M')
		return 72.7 * h - 58;
	else if (sexo == 'f' || sexo == 'F')
		return 62.1 * h - 44.7;
}

int main()
{
	char s;
	double altura;
	
	cin >> altura;
	cin >> s;
	
	cout << "Peso ideal = " << ideal(altura, s) << " kg" << endl;
	
	return 0;
}