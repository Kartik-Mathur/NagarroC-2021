#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	int k = 8;

	vector<int> a(n);

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	int product = 1;
	int i = 0;
	int ans = 0;
	for (int j = 0 ; j < n ; j++) {
		product *= a[j];
		while (product >= k) {
			product /= a[i++];
		}

		ans += (j - i + 1);
	}

	cout << ans << endl;
	return 0;
}
















