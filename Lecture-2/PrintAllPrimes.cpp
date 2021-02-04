// PrintAllPrimes.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no;
	cin >> n;
	no = 2;
	while (no <= n) {
		bool isPrime = true;

		int i = 2;
		while (i < no) {
			if (no % i == 0) {
				// Not Prime
				isPrime = false;
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