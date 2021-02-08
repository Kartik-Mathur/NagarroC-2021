// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1 , -1, 0, 10, 6};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	// 1st way
	// int temp = a[j];
	// a[j] = a[j + 1];
	// a[j + 1] = temp;

	// a[j] = a[j] + a[j + 1];
	// a[j + 1] = a[j] - a[j + 1];
	// a[j] = a[j] - a[j + 1];
	// Bubble sort
	for (int i = 0 ; i <= n - 2 ; i++) {
		for (int j = 0 ; j <= n - 2 - i ; j++) {
			if (a[j] > a[j + 1]) {
				// swap a[j] and a[j+1]
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}