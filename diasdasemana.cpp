#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	double n, g, f;
	int ds, d, m, a, delta;
	cin >> d >> m >> a;
    if (m > 2)
         f = m + 1;
	else
        {f = m + 13;
        g = a - 1;}
	
     
	n = int(365.25 * g) + int(30.6 * f) - 621049 + d;
    
	if (n < 36523)
		delta = 2;
	else if (365232 <= n && n < 73048)
		delta = 1;
	else if (n >= 73048)
		delta = 0;
	
    ds = round((n/7) * 7) + delta + 1;
	
	switch (ds)
	{case 1: cout << "Domingo" << endl;
	break;
	case 2: cout << "Segunda-feira" << endl;
	break;  
    case 3: cout << "Terça-feira" << endl;
    break;
    case 4: cout << "Quarta-feira" << endl;
    break;
    case 5: cout << "Quinta-feira" << endl;
    break;
    case 6: cout << "Sexta-feira" << endl;
    break;
    case 7: cout << "Sábado" << endl;
	break;}

	
	return 0;
}