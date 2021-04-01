// ChessElephant.cpp
#include <iostream>
using namespace std;

int ChessElephant(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}

	// recursive case
	int ans = 0;
	for (int k = 0 ; k < i ; k++) {
		ans += ChessElephant(k, j);
	}

	for (int k = 0 ; k < j ; k++) {
		ans += ChessElephant(i, k);
	}

	return ans;
}

int main() {

	int n, m;
	cin >> n >> m;

	cout << ChessElephant(n, m) << endl;

	return 0;
}
















