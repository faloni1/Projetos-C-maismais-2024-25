#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double N, S, H, VH;
	cin >> N >> H >> VH;
	S = VH * H;
	cout << "NUMBER = " << N << endl;
	cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << S << endl;  
	return 0;
}