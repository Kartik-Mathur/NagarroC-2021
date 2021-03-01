// SpiralPrint.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int r, c;

	cout << "Enter row and columns ";
	cin >> r >> c;
	int number = 1;
	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			a[row][col] = number++;
		}
	}

	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	int sr = 0, sc = 0, er = r - 1, ec = c - 1;

	while (sr <= er and sc <= ec) {
		for (int j = sc ; j <= ec ; j++) {
			cout << a[sr][j] << " ";
		}
		sr++;

		for (int i = sr ; i <= er ; i++) {
			cout << a[i][ec] << " ";
		}
		ec--;
		if (sr < er) {
			for (int i = ec ; i >= sc ; i--) {
				cout << a[er][i] << " ";
			}
			er--;
		}
		if (sc < ec) {
			for (int i = er ; i >= sr ; i--) {
				cout << a[i][sc] << " ";
			}
			sc++;
		}
	}
	cout << endl;


	return 0;
}












