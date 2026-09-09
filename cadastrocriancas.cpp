#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int c[999], id[999], i = 0, x14 = 0, x10 = 0, i2 = 0;
	double a[999], maa = 0, mai = 0, mi, ma, ta= 0, ti = 0;

		
	do	
	{	
		
		cin >> c[i];
		
		if (c[i] == 0)
			break;
		
	    do
		{
			cin >> a[i];
		}
		while (a[i] < 1 || a[i] > 1.7);
		
		ta += a[i];
        
		do
		{
			cin >> id[i];
		}
		while (id[i] < 10 || id[i] > 14);
		ti += id[i];
		
		if (a[i] > 1.5 && id[i] == 14)
			x14++;
		if (a[i] < 1.5 && id[i] == 10)
			x10++;
		
		i++;
	}
	while (c[i] > 0);
	
	ma = ta / i;
	mi = ti / i;

	for (i2 = 0; i2 < i; i2++)
	{
		if (a[i2] > ma)
			maa++;
		if (id[i2] < mi)
			mai++;
	}
	
	cout << "14 anos com mais de 1,5m: " << x14 << endl;
	cout << "10 anos com menos de 1,5m: " << x10 << endl;
	cout << "Altura acima da média: " << (maa / i) * 100 << "%" << endl;
	cout << "Idade abaixo da média: " << (mai / i) * 100 << "%" << endl;
	
	return 0;
}