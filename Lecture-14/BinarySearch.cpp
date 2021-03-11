#include <iostream>
using namespace std;

int BS(int *a, int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			// cout << "Key found at : " << mid << endl;
			return mid;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	return -1;
}

int main() {

	int a[] = {1, 2, 4, 6, 8};
	int n = sizeof(a) / sizeof(int);
	int key = 8;
	int s = 0, e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			cout << "Key found at : " << mid << endl;
			break;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	if (s > e) {
		cout << "Key was not found" << endl;
	}

	int ans = BS(a, n, key);
	if (ans == -1) {
		cout << "Key Not Found" << endl;
	}
	else {
		cout << "Found at: " << ans << endl;
	}
	return 0;
}
















