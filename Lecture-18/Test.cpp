#include <iostream>
using namespace std;

int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive(Pure Assumption)
	// n! = n * (n-1)!, (n-1)! is a smaller problem and recursion will solve it
	// int ChotaFactorial = fact(n - 1);

	// Find the answer
	// int BadaFactorial = n * ChotaFactorial;
	return n * fact(n - 1);
}

int main() {
	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}
















