// ArrayIsSorted.cpp
#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 1 || n == 0) {
		return true;
	}

	// recursive case(Pure Assumption)
	bool isChotaArraySorted = isSorted(a + 1, n - 1); // smaller array is sorted or not recursion will tell

	if (isChotaArraySorted == true and a[0] < a[1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 4, 5, 6, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);

	if (isSorted(a, n)) {
		cout << "Sorted" << endl;
	}
	else {
		cout << "Not Sorted" << endl;
	}

	return 0;
}
















