// InsertionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 3, 1, 2, 4, 17, 6, 7, 9, 8};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int i, j, hand;
	for (i = 1 ; i < n ; i++) {
		hand = a[i];

		for (j = i - 1 ; j >= 0 and a[j] > hand ; j --) {
			a[j + 1] = a[j];
		}

		a[j + 1] = hand;
	}

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}