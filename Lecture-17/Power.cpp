// Power.cpp
#include <iostream>
using namespace std;

int power(int x, int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case(Pure Assumption)
	int smallProblem = power(x, n - 1);

	int BiggerProblem = x * smallProblem;
	return BiggerProblem;
}

int main() {

	int x = 3, n = 3;
	cout << power(x, n) << endl;

	return 0;
}
















