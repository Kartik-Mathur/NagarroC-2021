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

int main() {

	int deno[4] = {1, 7, 10};
	int amt;
	cin >> amt;
	cout << coinsExchange(amt, deno, 3) << endl;

	return 0;
}
















