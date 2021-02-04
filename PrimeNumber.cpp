// PrimeNumber
#include <iostream>
using namespace std;

int main() {

	int n ;
	cin >> n;

	int i = 2; // Initialization
	while (i <= n - 1) { // condn
		// N should not get divided by any i
		if (n % i == 0) {
			// This means n gets divided by i
			cout << "Not Prime" << endl;
			return 0; // exit the program
		}

		i = i + 1; // updation
	}
	// that means i == n
	cout << "Prime" << endl;


	return 0; // Inside main, return 0 means exit the program
}