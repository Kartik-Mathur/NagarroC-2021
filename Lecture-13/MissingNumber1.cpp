#include <iostream>
using namespace std;

int main() {

	int n, no;
	int exp1 = 0, exp2 = 0;
	cin >> n;

	for (int i = 1 ; i < n ; i++) {
		cin >> no;
		exp1 ^= no;
	}

	for (int i = 1 ; i <= n ; i++) {
		exp2 ^= i;
	}

	cout << ( exp1 ^ exp2 ) << endl;

	return 0;
}












