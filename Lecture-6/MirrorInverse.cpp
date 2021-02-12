#include <iostream>
using namespace std;

int main() {
	int a[10000];
	int n;
	cin >> n;

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	int indx = 0;
	while (indx < n) {
		int val = a[indx];
		if (a[val] != indx) {
			// Not a mirror Inverse
			cout << "false";
			break;
		}
		indx++;
	}
	if (indx == n) {
		cout << "true";
	}
	return 0;
}