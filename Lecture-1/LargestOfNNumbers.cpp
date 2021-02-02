// LargestOfNNumbers
#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int main() {

	int n, max_val = INT_MIN, number;
	cin >> n;

	int i = 1;
	while (i <= n) {
		cin >> number;
		if (number > max_val) {
			max_val = number;
		}

		i = i + 1;
	}

	cout << "Largest Number : " << max_val;
	cout << endl;
	return 0;
}