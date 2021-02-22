#include <iostream>
using namespace std;

int fact(int n) {
	int ans = 1;

	for (int i = 1 ; i <= n ; i++) {
		ans *= i;
	}

	return ans;
}

int nCr(int n, int r) {
	// n, r & (n-r)
	int combinations = fact(n) / (fact(r) * fact(n - r));
	return combinations;
}

int main() {

	int n, r;
	cin >> n >> r;
	cout << nCr(n, r) << endl;

	return 0;
}