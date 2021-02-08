// ReverseNumber
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n; // Assignment of n
	cout << n << endl;
	int rev = 0;

	for (; n != 0 ; n /= 10) {
		rev = 10 * rev + (n % 10);
	}

	cout << rev << endl;
	cout << 10 * rev + 10 << endl;

	// while (n != 0) { // condition check
	// 	cout << n % 10;
	// 	n = n / 10; // Updation
	// }
	// cout << endl;


	return 0;
}
