#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);

	int j, i;
	for ( i = 1 , j = 1 ; i < n ; i++) {
		if (a[i] != a[i - 1]) {
			a[j++] = a[i];
		}
	}

	for (int i = 0 ; i < j ; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















