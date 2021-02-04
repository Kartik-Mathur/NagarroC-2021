#include <iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	int number = 1;

	int row = 1;
	while (row <= n) {

		i = 1;
		while (i <= row) {
			cout << number << " ";
			number = number + 1;
			i = i + 1;
		}
		cout << endl;

		row = row + 1;
	}


	cout << endl;
	return 0;
}
