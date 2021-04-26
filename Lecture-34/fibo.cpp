#include <iostream>
using namespace std;
// before solving the problem:
// - Check if it is already solved
// - Before returning the answer store it

// int fibo(int n) {
// 	// base case
// 	if (n == 0 || n == 1) {
// 		return n;
// 	}
// 	// recursive case
// 	return fibo(n - 1) + fibo(n - 2);
// }

int fibo(int n, int *dp) {
	// base case
	if (n == 0 || n == 1) {
		dp[n] = n;
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	// recursive case
	// int ans = fibo(n - 1) + fibo(n - 2);
	// dp[n] = ans;
	// return ans;
	return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

int bottomUp(int n) {
	int dp[1000] = {0};

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n ; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {
	int n;
	cin >> n;
	// int dp[1000];
	int* dp = new int[n + 1];
	for (int i = 0 ; i <= n ; i++) {
		dp[i] = -1;
	}

	cout << fibo(n, dp) << endl;
	cout << bottomUp(n) << endl;

	return 0;
}
















