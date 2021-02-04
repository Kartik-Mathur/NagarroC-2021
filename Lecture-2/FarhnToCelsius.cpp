#include <iostream>
using namespace std;

int main() {

	int init, fval, step, f;
	cin >> init >> fval >> step;
	// c = (5/9)*(f-32); // c: cel and f : fahrn
	for (f = init; f <= fval ; f = f + step) {
		// int c = (5 / 9.0) * (f - 32);
		int c = (5 * (f - 32)) / 9;
		cout << f << " " << c << endl;
	}

	cout << endl;
	return 0;
}