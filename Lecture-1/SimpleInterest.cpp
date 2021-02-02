// SimpleInterest
#include <iostream>
using namespace std;

int main() {

	int p, r, t; // It is given p,r,t are integers
	float si;

	cin >> p >> r >> t;
	si = (p * r * t) / 100.0;

	cout << "Simple Interest is: " << si << endl;

	return 0;
}