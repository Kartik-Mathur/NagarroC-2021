// NQueen.cpp
#include <iostream>
using namespace std;

bool isSafeToPlace(int board[][10], int i, int j, int n) {
	// check whether there is any queen in ith row and jth column or not
	for (int k = 0 ; k < n ; k++) {
		if (board[i][k] == 1 || board[k][j] == true) {
			return false;
		}
	}

	// for (int k = 0 ; k < n ; k++) {
	// 	if (board[k][j] == true) {
	// 		return false;
	// 	}
	// }
	// check right diagonal
	int l = i, m = j;
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j++;
	}

	i = l; j = m;
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j--;
	}

	return true;
}

bool NQueen(int board[][10], int i, int n) {
	// base case
	if ( i == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0 ; j < n ; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}


	// recursive case
	for (int j = 0 ; j < n ; j++) {
		if (isSafeToPlace(board, i, j, n)) {
			board[i][j] = 1;
			bool kyaBakiSolveHua = NQueen(board, i + 1, n);
			if (kyaBakiSolveHua == true) {
				return true;
			}
			board[i][j] = 0;
		}
	}

	return false;
}


int main() {

	int board[10][10] = {0};
	int n;
	cin >> n; // n*n


	NQueen(board, 0, n);

	return 0;
}
















