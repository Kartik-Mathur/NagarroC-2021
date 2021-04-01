// SumOfBitDifference.cpp
#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2};
	int n = 2;
	int ans = 0;

	for (int bit = 0 ; bit < 31 ; bit++) {
		int setbits = 0;

		for (int i = 0 ; i < n ; i++) {
			if (a[i] & (1 << bit)) {
				setbits++;
			}
		}
		ans += (setbits) * (n - setbits) * 2;
	}

	cout << ans << endl;
	return 0;
}
















