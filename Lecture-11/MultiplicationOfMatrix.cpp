// MultiplicationOfMatrix.cpp
#include <iostream>
using namespace std;

int main() {

	int a[][3] = {
		{1, 2, 4},
		{3, 2, 1},
		{3, 1, 4}
	};

	int b[][3] = {
		{2, 1, 2},
		{1, 2, 4},
		{1, 5, 2}
	};


	int m, n, l, k;
	m = n = l = k = 3;

	int res[10][10] = {0};
	// Find all the bucket values of res-> m*k
	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < k ; j++) {
			int ans = 0;
			for (int x = 0 ; x < n ; x++) {
				ans += a[i][x] * b[x][j];
			}
			res[i][j] = ans;
		}
	}

	for (int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < k ; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}



















