// PrintNumbers.cpp
#include <iostream>
using namespace std;

void increasing(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	increasing(n - 1); // Recursion will print
	cout << n << " ";
}

void decreasing(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	cout << n << " ";
	decreasing(n - 1); // Recursion will print
}

int main() {

	int n;
	cin >> n;

	increasing(n);
	cout << endl;
	decreasing(n);

	cout << endl;
	return 0;
}
















