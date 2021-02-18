// ReverseAString.cpp
#include <iostream>
using namespace std;

int main() {

	char a[100];
	// cin >> a;
	cin.getline(a, 100);

	cout << a << endl;


	int i = 0;
	int len;
	for (len = 0 ; a[len] != '\0' ; len++) {

	}

	int j = len - 1;
	while (i < j) {
		swap(a[i++], a[j--]);
	}

	cout << a;

	cout << endl;
	return 0;
}