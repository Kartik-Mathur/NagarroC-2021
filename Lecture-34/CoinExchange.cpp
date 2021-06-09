#include <iostream>
using namespace std;

int coinsExchange(int amt, int *deno, int n) {
	// base case
	if (amt == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (amt >= deno[i]) {
			int sa = coinsExchange(amt - deno[i], deno, n);
			if (sa != INT_MAX) {
				ans = min(sa + 1, ans);
			}
		}
	}

	return ans;
}

int topDown(int amt, int *deno, int n, int *dp) {
	// base case
	if (amt == 0) {
		return dp[amt] = 0;
	}
	if (dp[amt] != -1) {
		return dp[amt];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (amt >= deno[i]) {
			int sa = topDown(amt - deno[i], deno, n, dp);
			if (sa != INT_MAX) {
				ans = min(sa + 1, ans);
			}
		}
	}

	return dp[amt] = ans;
}

int bottomUp(int amt, int *deno, int m) {
	int *dp = new int[amt + 1];
	for (int i = 0 ; i <= amt ; i++) {
		dp[i] = INT_MAX;
	}

	dp[0] = 0;
	for (int rupay = 1 ; rupay <= amt ; rupay++) {
		// int ans = INT_MAX;
		for (int i = 0 ; i < m ; i++) {
			if (rupay >= deno[i]) {
				// ans = min(ans, dp[rupay - deno[i]]);
				dp[rupay] = min(1 + dp[rupay - deno[i]], dp[rupay]);
			}
		}
		// dp[rupay] = min(dp[rupay], ans) + 1;
	}

	for (int i = 0; i <= amt ; i++) {
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[amt];
}

int main() {

	int deno[4] = {1, 2, 5, 10};
	int amt;
	cin >> amt;
	int *dp = new int[amt + 1];
	for (int i = 0 ; i <= amt ; i++) {
		dp[i] = -1;
	}
	cout << topDown(amt, deno, 4, dp) << endl;
	cout << bottomUp(amt, deno, 4) << endl;
	cout << coinsExchange(amt, deno, 4) << endl;

	return 0;
}
















