#include <iostream>
#include <cmath>
using namespace std;
#define PNF(a,n,m) for(int i = 0 ; i < n ; i++){for(int j = 0 ; j < m ; j++){cout<<a[i][j]<<" ";}cout<<endl;}cout<<endl;

bool isSafeToPut(int mat[][9], int i, int j, int n, int number) {
	// Check the row and column
	for (int k = 0 ; k < n ; k++) {
		if (mat[i][k] == number || mat[k][j] == number) {
			return false;
		}
	}

	n = sqrt(n); // now n is equals to sqrt(n)
	int si = (i / n) * n;
	int sj = (j / n) * n;
	// check for the smaller block
	for (int i = si; i < si + n; i++) {
		for (int j = sj ; j < sj + n ; j++) {
			if (mat[i][j] == number) {
				return false;
			}
		}
	}

	return true;
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < n ; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		// PNF(mat,n,n);
		return true;
	}
	// Recursive cases

	if (j == n) {
		return sudokuSolver(mat, i + 1, 0, n);
	}

	if (mat[i][j] != 0) {
		return sudokuSolver(mat, i, j + 1, n);
	}

	// recursive case
	// Lets consider we are working for the empty cell only and not for already filled cell
	for (int number = 1 ; number <= n ; number++) {
		if (isSafeToPut(mat, i, j, n, number)) {
			mat[i][j] = number;
			bool KyaChotaSolveHua = sudokuSolver(mat, i, j + 1, n);
			if (KyaChotaSolveHua == true) {
				return true;
			}
			mat[i][j] = 0;
		}
	}

	return false;
}

int main() {

	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(mat, 0, 0, 9);
	return 0;
}
















