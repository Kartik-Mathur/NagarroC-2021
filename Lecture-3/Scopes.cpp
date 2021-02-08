// Scopes.cpp
#include <iostream>
using namespace std;
// Global space
int a = 100; // Global variable

int main() {

	cout << a << endl; // 1.
	int a = -1;
	cout << a << endl; // 2.

	// scope resolution operator
	cout << ::a << endl; // 100
	::a = ::a + 1;
	cout << ::a << endl; // 101


	// int b = 20;
	// int i;

	// for (i = 0 ; i <= 5 ; i++) {
	// 	cout << i << " ";
	// }
	// cout << endl;
	// cout << "i: " << i << endl; //

	// if (a > 1) {
	// 	int b = 1;
	// 	cout << a << endl; // 1.
	// 	cout << b << endl; // 2.
	// }
	// else {
	// 	a++;
	// 	cout << a << endl;
	// }

	// cout << a << endl; // 3.
	// cout << b << endl; // 4.

	return 0;
}