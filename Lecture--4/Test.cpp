#include <iostream>
using namespace std;

int main() {
	// Initialization
	// 1st way
	// int a[10] = {10, 20, 30, 40, 50};
	int a[10] = {0};

	for (int i = 0 ; i < 10 ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	// 2nd way
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15};
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	/*
		// Creating an array
		// N(size of the array) can be at max 10^6
		int a[10]; // last buckets index : 9(N-1)

		// a[0] = 1; // Assignment
		// a[1] = 2;
		// a[2] = 3;
		// a[3] = 4;
		// a[4] = 5;
		for (int i = 0 ; i < 10 ; i++) {
			a[i] = i + 1;
		}
		// cout << a[0] << " ";
		// cout << a[1] << " ";
		// cout << a[2] << " ";
		// cout << a[3] << " ";
		// cout << a[4] << " ";
		for (int i = 0 ; i < 10 ; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	*/
	return 0;
}