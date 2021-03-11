// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int s = 0 , e = n;
	float ans;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (mid * mid == n) {
			ans = mid;
			break;
		}
		else if (mid * mid > n) {
			e = mid - 1;
		}
		else {
			ans = mid;
			s = mid + 1;
		}
	}

	cout << "SquareRoot: " << ans << endl;


	float inc = 0.1;
	int precision = 3;
	int current_precision = 1;
	while (current_precision <= precision) {
		while (ans * ans <= n) {
			ans += inc;
		}
		// ans *ans >n
		// decrease inc value
		ans -= inc;
		inc /= 10;

		current_precision++;
	}

	cout << ans << endl;
	return 0;
}
















