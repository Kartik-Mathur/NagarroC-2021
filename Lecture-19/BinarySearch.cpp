// BinarySearch.cpp
#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}
	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] > key) {
		return BinarySearch(a, s, mid - 1, key);
	}
	else {
		return BinarySearch(a, mid + 1, e, key);
	}
}

int BinarySearch1(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}
	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] > key) {
		int ans = BinarySearch1(a, s, mid - 1, key);
		return ans;
	}
	else {
		int ans = BinarySearch1(a, mid + 1, e, key);
		return ans;
	}
}

void BinarySearch2(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		cout << "Key Not Found" << endl;
		return;
	}
	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) {
		cout << "Key found at " << mid << endl;
		return;
	}
	else if (a[mid] > key) {
		BinarySearch2(a, s, mid - 1, key);
		return;
	}
	else {
		BinarySearch2(a, mid + 1, e, key);
		return;
	}
}
int main() {
	int a[] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int key;

	cin >> key;
	int ans = BinarySearch(a, 0, n - 1, key);
	cout << ans << endl;
	BinarySearch2(a, 0, n - 1, key);
	return 0;
}
















