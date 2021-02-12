// NumberMirrorInverse
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		int ans = 0;
		int n, number;
		cin >> n;
		number = n;
		int indx = 1;
		while (n != 0) {
			int val = n % 10;
			int x = 1;
			for (int i = 1 ; i < val ; i++) {
				x *= 10;
			}
			ans += x * indx;
			indx++;
			n /= 10;
		}
		if (ans == number) {
			cout << "true";
		}
		else {
			cout << "false";
		}
		cout << endl;
		t--;
	}

	return 0;
}