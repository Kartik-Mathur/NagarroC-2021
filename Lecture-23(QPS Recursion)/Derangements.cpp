// Derangements.cpp
#include <iostream>
using namespace std;

int solve(int n) {
	// base case
	if (n == 1) {
		return 0;
	}
	if (n == 2) { // n>=2
		return 1;
	}

	// recursive case
	// 1*(1+0)
	return (n - 1) * (solve(n - 1) + solve(n - 2));
}

int main() {

	int n;
	cin >> n;

	cout << solve(n) << endl;


	return 0;
}
















