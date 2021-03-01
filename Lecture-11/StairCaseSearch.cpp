// StairCaseSearch.cpp
#include <iostream>
using namespace std;

int main()
{
	int a[][4] = {
		{2, 4, 5, 6},
		{3, 7, 8, 9},
		{10, 11, 12, 13},
		{14, 15, 17, 18}
	};
	int r = 4, c = 4;
	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	// Code
	int key = 16;
	if (key < a[0][0] || key > a[r - 1][c - 1]) {
		cout << "Key Not Present" << endl;
	}
	else {
		// staircase search code
		int i = 0, j = c - 1;
		bool isPresent = false;

		while (i<r and j >= 0) {
			if (a[i][j] == key) {
				cout << "Key Found at " << i << " and " << j << endl;
				isPresent = true;
				break;
			}
			else if (a[i][j] < key) {
				i++;
			}
			else { // key > a[i][j]
				j--;
			}
		}

		if (isPresent == false) {
			cout << "Key Not Present" << endl;
		}
	}

	return 0;
}















