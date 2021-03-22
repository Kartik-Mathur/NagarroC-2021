// MergeSort.cpp
#include <iostream>
using namespace std;

void Merge(int *a, int *b, int *c, int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;

	while (i <= mid and j <= e) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}

	while (j <= e) {
		a[k++] = c[j++];
	}

	while (i <= mid) {
		a[k++] = b[i++];
	}
}

void MergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}
	// recursive case
	// 1. Divide
	int b[100], c[100];
	int mid = (s + e) / 2;
	for (int i = s ; i <= mid ; i++) {
		b[i] = a[i];
	}
	for (int i = mid + 1 ; i <= e ; i++) {
		c[i] = a[i];
	}
	// 2. Sort
	MergeSort(b, s, mid);
	MergeSort(c, mid + 1, e);
	// 3. Merge
	Merge(a, b, c, s, e);
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
	MergeSort(a, 0, n - 1);
	print(a, n);
	return 0;
}
















