// PrintPrimesBreak
#include <iostream>
using namespace std;

int main() {
	int n, no;
	cin >> n;
	// return 0 inside main anywhere would mean that you want to stop the program
	no = 2;
	while (no <= n) {
		bool isPrime = true;

		int i = 2;
		while (i < no) {
			if (no % i == 0) {
				// Not Prime
				isPrime = false;
				// No need to continue the loop of i any further
				break; // This will stop the execution of the inner loop of i
			}

			i = i + 1;
		}

		// Prime Number
		if (isPrime == true) {
			cout << no << ' ';
		}

		no = no + 1;
	}

	cout << endl;
	return 0;
}

