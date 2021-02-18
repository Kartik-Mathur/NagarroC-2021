// RainWaterharvesting.cpp
#include <iostream>
using namespace std;

int main() {

	int height[] = {1, 2, 1, 4, 3, 1, 3, 5};
	int n = sizeof(height) / sizeof(int);

	int left[1000], right[1000];

	right[n - 1] = height[n - 1];
	left[0] = height[0];

	for (int i = 1; i < n; i++) {
		left[i] = max(height[i], left[i - 1]);
	}
	// for (int i = 0 ; i < n ; i++) {
	// 	cout << left[i] << " ";
	// }
	// cout << endl;

	for (int i = n - 2 ; i >= 0 ; i--) {
		right[i] = max(height[i], right[i + 1]);
	}

	// for (int i = 0 ; i < n ; i++) {
	// 	cout << right[i] << " ";
	// }
	// cout << endl;

	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		int x = min(left[i], right[i]) - height[i];
		if (x > 0) {
			ans += x;
		}
	}
	cout << "Total Water: " << ans << endl;
	return 0;
}













