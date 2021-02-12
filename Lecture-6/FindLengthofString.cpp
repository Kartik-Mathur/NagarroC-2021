// FindLengthofString.cpp
#include <iostream>
using namespace std;

int main() {
	// Initialization of character
	char a[100] = "HelloWorld";
	// char a[] = "Hello World!";
	// Lets talk about the error
	// char a[6] = "Hello";
	cout << a << endl;

	// We can do initialization character by character
	// char b[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char b[100] = {'H', 'e', 'l', 'l', 'o', '\0'};
	cout << b << endl;
	// To find the length
	int len;
	for (len = 0 ; a[len] != '\0' ; len++) {}

	for (int i = 0 ; a[i] != '\0' ; i++) {
		cout << a[i] << "-";
	}
	// cout << "\b \b";
	cout << endl;

	for (int i = 0 ; i < len ; i++) {
		if (i == len - 1) {
			cout << a[i];
		}
		else {
			cout << a[i] << "-";
		}
	}
	cout << endl;

	cout << "Length: " << len << endl;
	return 0;
}



