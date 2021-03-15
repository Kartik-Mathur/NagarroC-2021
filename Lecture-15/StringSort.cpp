#include <iostream>
using namespace std;

bool compare(string a, string b) {
	// What if I want to compare strings like bat and batman
	int i = 0, j = 0;

	while (i < a.size() and j < b.size()) {
		if (a[i] > b[j]) {
			return false;
		}
		else if (a[i] < b[j]) {
			return true;
		}
		i++;
		j++;
	}
	if (j < b.length()) {
		return false;
	}
	else {
		return true;
	}
}

int main() {

	int n;
	cin >> n;

	string a[1000];

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	sort(a, a + n, compare);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
















