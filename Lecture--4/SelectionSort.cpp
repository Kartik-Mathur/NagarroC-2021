// SelectionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 3, 1, 2, 4, 17, 6, 7, 9, 8};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0 ; i <= n - 2 ; i++) {
		int min = i;
		for (int j = i + 1 ; j <= n - 1 ; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}

		swap(a[min], a[i]);
	}
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
	return 0;
}