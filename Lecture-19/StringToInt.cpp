// StringToInt.cpp
#include <iostream>
using namespace std;

int StringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	int digit = a[n - 1] - '0';
	int chota = StringToInt(a, n - 1);
	return chota * 10 + digit;
}

int main() {

	char a[100];
	// cout << sizeof(a) << endl; // will give the entire array size
	// cout << strlen(a) << endl;
	cin >> a;

	int x =  StringToInt(a, strlen(a));
	cout << x << endl;
	cout << x * 10 + 1 << endl;

	return 0;
}
















