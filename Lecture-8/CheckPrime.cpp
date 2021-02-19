// CheckPrime.cpp
#include <iostream>
using namespace std;

void isPrime(int n) {
	// Code
	bool isPrime = true;
	for (int i = 2 ; i < n ; i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}

	if (isPrime) {
		cout << "Prime Number" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}
}


bool checkPrime(int n) {
	// bool isPrime = true;
	for (int i = 2 ; i < n ; i++) {
		if (n % i == 0) {
			// isPrime = false;
			return false; // Once we know that it's not prime, return false to whosoever called this function
		}
	}

	return true;
}


int main() {

	int n;
	cin >> n;

	isPrime(n);
	bool ans = checkPrime(n);

	if (ans == true) {
		cout << "Hello World" << endl;
	}
	else {
		cout << "Coding Blocks!" << endl;
	}
	return 0;
}

















