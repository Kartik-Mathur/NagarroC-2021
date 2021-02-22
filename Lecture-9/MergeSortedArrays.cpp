// MergeSortedArrays.cpp
#include <iostream>
using namespace std;

void Merge(int a[], int n, int b[], int m) {

	int i = n - 1, j = m - 1, k = m + n - 1;
	while (i >= 0 and j >= 0) {
		if (a[i] < b[j]) {
			a[k--] = b[j--];
		}
		else {
			a[k--] = a[i--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}

}


void Print(int a[], int n) {
	cout << "Inside Function" << endl;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
		// cout << *(a + i) << " ";
	}

	cout << endl;
}


int main() {

	int a[9] = {1, 4, 5, 8};
	int b[5] = {2, 3, 6, 7, 9};

	int n = 4;
	int m = 5;

	Merge(a, n, b, m);

	Print(a, n + m);


	return 0;
}