#include <iostream>
using namespace std;

void BubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return;
	}

	// recursive case
	for (int j = 0 ; j < n - 1 ; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}
	BubbleSort(a, n, i + 1);
}

void BubbleSortRec(int *a, int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return;
	}
	if (j == n - 1) {
		BubbleSortRec(a, n, i + 1, 0);
	}
	else { // j!= n-1
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		BubbleSortRec(a, n, i, j + 1);
	}
}

void print(int *a, int n) {
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {5, 4, 3, 2, 1, 7, 6, 0, 10};
	int n = sizeof(a) / sizeof(int);

	print(a, n);
	BubbleSortRec(a, n, 0, 0);
	print(a, n);
	return 0;
}
















