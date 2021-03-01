#include <iostream>
using namespace std;

int main() {

	int a[1000][1000]; // Here its mandatory to mention rows and columns
	int r, c;
	cout << "Enter row and columns ";
	cin >> r >> c;

	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			cin >> a[row][col];
		}
	}

	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}


	a[1][0] = 4;
	a[2][1] = 8;

	cout << a[1][0] << endl;
	cout << a[2][1] << endl;

	// Initialization
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	// Initialization
	int b[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	// for (int row = 0 ; row < 3 ; row++) {
	// 	for (int col = 0 ; col < 3 ; col++) {
	// 		cout << arr[row][col] << " ";
	// 	}
	// 	cout << endl;
	// }

	for (int row = 0 ; row < 4 ; row++) {
		for (int col = 0 ; col < 3 ; col++) {
			cout << b[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}