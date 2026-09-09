#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double v0, s0, a, t, vf, sf;
	cin >> v0 >> s0 >> a >> t;
	sf = s0 + v0 * t + 0.5 * a * pow(t, 2);
	vf = v0 + a * t;
	cout << "VF = " << vf << " SF = " << sf << endl; 
	return 0;
}