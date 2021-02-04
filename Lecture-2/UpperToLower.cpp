#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	cout << ch << endl;
	int a = ch;
	cout << "Ascii Code " << a << endl;
	// a >= 97 && a <= 122

	if (ch >= 'a' && ch <= 'z') {
		// Smaller case character
		// Subtract 32 from the ASCII code to get the Upper case characters ASCII Code
		ch = a - 32; // For upper case character
		// cout << ch << endl;
		cout << "Smaller Case";

	}
	else {
		// Upper case character
		// ADD 32 int the ASCII code to get the smaller case characters ASCII Code
		ch = a + 32; // For upper case character
		// cout << ch << endl;
		cout << "Upper Case";
	}

	cout << endl;
	return 0;
}