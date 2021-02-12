// TargetSumTriplets.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[10000];
	int n, sum;

	cin >> n;

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	cin >> sum;

	// Inbuilt Sort Function
	sort(a, a + n); // To sort the array in ascending order

	for (int i = 0 ; i < n - 2 ; i++) {
		int no1 = a[i];
		for (int j = i + 1 ; j < n - 1 ; j++) {
			int no2 = a[j];
			for (int k = j + 1 ; k < n ; k++) {
				int no3 = a[k];
				if (no1 + no2 + no3 == sum) {
					cout << no1 << ", " << no2 << " and " << no3 << endl;
				}
			}
		}
	}



	return 0;
}