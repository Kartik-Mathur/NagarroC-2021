// SelectionSort.cpp
#include <iostream>
using namespace std;

int FindMinIndex(int *a, int n, int i) {
	int min = i;
	for (int j = i + 1; j < n ; j++) {
		if (a[j] < a[min]) {
			min = j;
		}
	}
	return min;
}

void SelectionSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return;
	}

	// recursive case
	int min = FindMinIndex(a, n, i);
	if (i != min) {
		swap(a[i], a[min]);
	}
	SelectionSort(a, n, i + 1);
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
	SelectionSort(a, n, 0);
	print(a, n);

	return 0;
}
















