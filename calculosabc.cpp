#include<iostream>
using namespace std;

int calc_a(int x)
{
	return 2 * (x * x) + 3 * x - 1;
}

int calc_b(int x)
{
	return (x * x * x);
}

int calc_c(int y)
{
	return (y * y * y);
}

int main()
{
    int x,y;
    
    cin >> x >> y;
    
    int a = calc_a(x);
    cout << "a = " << a << endl;
    
	int b = calc_b(x);
    cout << "b = " << b << endl;
    
	int c = calc_c(y);
    cout << "c = " << c << endl;
    
    return 0;
}
