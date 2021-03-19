// SumOfArray.cpp
#include <iostream>
using namespace std;

int sum(int *a, int n) {
	// base
	if (n == 0) {
		return 0;
	}

	// recursive
	int smallAns = sum(a + 1, n - 1);
	int bigAns = a[0] + smallAns;
	return bigAns;
}

int sum1(int *a, int n) {
	if (n == 0) {
		return 0;
	}

	return sum1(a, n - 1) + a[n - 1];
}

int sum3(int *a, int n, int i) {
	// base
	if (i == n) {
		return 0;
	}

	// recursive
	return sum3(a, n, i + 1) + a[i];
}

int main() {

	int a[] = {4, 2, 1, 3, 6};
	int n = sizeof(a) / sizeof(int);

	cout << sum(a, n) << endl;
	cout << sum1(a, n) << endl;
	cout << sum3(a, n, 0) << endl;
	return 0;
}
















