// SearchIn2D.cpp
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
	int key;
	cout << "Enter key to search ";
	cin >> key;
	bool isPresent = false;

	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			if (a[row][col] == key) {
				cout << "Key Found at " << row << " and " << col ;
				isPresent = true;
				break;
			}
		}

		if (isPresent == true) {
			break;
		}
	}

	if (isPresent == false) {
		cout << "Key is not Found";
	}

	cout << endl;
	return 0;
}












