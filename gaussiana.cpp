#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double x, m, s, f;
	cin >> x >> m >> s;
	f =(1 / sqrt(2 * 3.14159 * (s * s))) * exp( - (pow (x - m, 2) / (2 * (s * s))));
	cout << fixed << setprecision(4);
	cout << f << endl;
	return 0;
}
