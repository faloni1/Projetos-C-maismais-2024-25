#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double np1, np2, m;
	cout << fixed << setprecision(2);
	do
	{
		cin >> np1;
		if(np1 < 0 || np1 > 10)
			cout << "nota invalida" << endl;		
	}
	while (np1 < 0 || np1 > 10); 
	do
	{
		cin >> np2;
		if(np2 < 0 || np2 > 10)
			cout << "nota invalida" << endl;		
	}
	while (np2 < 0 || np2 > 10);
	m = (np1 + np2) / 2; 
    cout << "media = " << m << endl;
		
	
	return 0;
}