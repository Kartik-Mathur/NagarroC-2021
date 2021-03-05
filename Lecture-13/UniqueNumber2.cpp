// UniqueNumber2.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[100];
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
		ans ^= a[i];
	}

	int bitpos = 0;
	while ((ans & 1) != 1) {
		bitpos++;
		ans = ans >> 1;
	}

	int val = (1 << bitpos);

	// Find the numbers that belongs to set1 and set2
	int no1 = 0, no2 = 0;
	for (int i = 0 ; i < n ; i++) {
		if ((a[i]&val) == 0) {
			// this a[i] belongs to set 1
			no1 ^= a[i];
		}
		else {
			// this a[i] belongs to set 2
			no2 ^= a[i];
		}
	}

	cout << "Unique Numbers are " << no1 << " and " << no2 << endl;

	return 0;
}












