#include <iostream>
using namespace std;

int main() {

	int a[5] = {5, 4, 3, 2, 1};
	int n = 5;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	// Bubble Sort Algorithm
	for (int i = 0 ; i <= n - 2; i++) {
		for (int j = 0 ; j <= n - 2 ; j++) {
			if (a[j] > a[j + 1]) {
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
















