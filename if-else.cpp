#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	// if (a > 10) {
	// 	// If condition a>10, if true then execute this if block
	// 	cout << "Hello" << endl;
	// }
	// else {
	// 	cout << "World" << endl;
	// }
	// 1<= a <= 10--> Wrong way and will give error
	if (a >= 1 && a <= 10) {
		cout << "Hello" << endl;
	}
	else if (a >= 11 && a <= 20) {
		cout << "World" << endl;
	}
	else {
		cout << "Welcome" << endl;
	}

	return 0;
}


