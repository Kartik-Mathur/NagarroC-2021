// MinStepsTo1.cpp
#include <iostream>
#include <climits>
using namespace std;

int minsteps(int n) {
	// base case
	if (n == 1) {
		return 0;
	}

	// recursive case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	op1 = minsteps(n - 1);
	if (n % 2 == 0) {
		op2 = minsteps(n / 2);
	}
	if (n % 3 == 0) {
		op3 = minsteps(n / 3);
	}

	return min(op1, min(op2, op3)) + 1;
}

int topDown(int n, int *dp) {
	if (n == 1) {
		return dp[n] = 0;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	// recursive case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	op1 = topDown(n - 1, dp);
	if (n % 2 == 0) {
		op2 = topDown(n / 2, dp);
	}
	if (n % 3 == 0) {
		op3 = topDown(n / 3, dp);
	}

	return dp[n] = min(op1, min(op2, op3)) + 1;
}


int main() {

	int n;
	cin >> n;
	int *dp = new int[n + 1];
	for (int i = 0 ; i <= n ; i++) {
		dp[i] = -1;
	}

	cout << topDown(n, dp) << endl;
	cout << minsteps(n) << endl;

	return 0;
}
















