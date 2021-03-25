// RatInMaze.cpp
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5], int i, int j, int sol[][4], int n, int m) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int k = 0 ; k < n ; k++) {
			for (int l = 0 ; l < m ; l++) {
				cout << sol[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// Mark that you have visited this place
	sol[i][j] = 1;
	// Check whether we can go right or not, if we can then go
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		// we can only go right, if we are within the maze and the right cell is not blocked
		bool KyaRightSeBaatBani = RatInMaze(maze, i, j + 1, sol, n, m);
		if (KyaRightSeBaatBani == true) {
			return true;
		}
	}
	// Check whether we can go down or not, if we can then go
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool KyaNeecheSeBaatBani = RatInMaze(maze, i + 1, j, sol, n, m);
		if (KyaNeecheSeBaatBani == true) {
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[4][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[4][4] = {0};

	RatInMaze(maze, 0, 0, sol, 4, 4);


	return 0;
}
















