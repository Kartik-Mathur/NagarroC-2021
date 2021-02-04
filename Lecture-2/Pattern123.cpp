// Pattern123
#include <iostream>
using namespace std;

int main() {

	int n, row, spaces, i, number;
	cin >> n;

	for (row = 1 ; row <= n ; row = row + 1) {
		// 1. Print spaces
		for (spaces = 1 ; spaces <= n - row ; spaces = spaces + 1 ) {
			cout << " " ;
		}

		// 2. Print Increasing numbers
		number = row;
		for (i = 1 ; i <= row ; i = i + 1) {
			cout << number;
			number = number + 1;
		}

		// 3. Print Decreasing numbers
		number = 2 * row - 2;
		for (i = 1 ; i <= row - 1 ; i = i + 1) {
			cout << number;
			number = number - 1;
		}

		cout << endl; // After work is done for a row, go to next line
	}



	cout << endl;
	return 0;
}