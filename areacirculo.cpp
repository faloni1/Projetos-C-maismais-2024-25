#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double A, R;
	cin >> R;
	A = 3.14159 * (R * R);
	cout << fixed << setprecision(3);
	cout << A << endl;
	return 0;
}