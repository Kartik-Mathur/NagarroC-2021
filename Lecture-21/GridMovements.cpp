// GridMovements.cpp
#include <iostream>
using namespace std;

int grid(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}

	if (i < 0 || j < 0) {
		return 0;
	}

	// recursive case
	return grid(i - 1, j) + grid(i, j - 1);
}

int main() {
	int i, j;
	cin >> i >> j;

	cout << grid(i, j) << endl;

	return 0;
}
















