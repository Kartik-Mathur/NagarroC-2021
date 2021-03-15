// InbuiltSort.cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {

	int a[] = {1, 7, 56, 8, 9, 5, 3, 2};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	// sort(a, a + n);// By default sort function sorts in ascending order
	// To sort in descending order
	sort(a, a + n, compare);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















