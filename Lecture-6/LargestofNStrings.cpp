// LargestofNStrings.cpp
#include <iostream>
using namespace std;
// 5
// Hello
// HelloWorld
// Code
// Coding
// Coder

int main() {

	char a[100], largest[100];
	int lena, lenl = 0;

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0 ; i < n ; i++) {
		cin.getline(a, 100);
		// Find length of a
		for (lena = 0 ; a[lena] != '\0' ; lena++) {}

		if (lena > lenl) {
			for (int i = 0 ; i <= lena ; i++) {
				largest[i] = a[i];
			}
			lenl = lena;
		}

	}
	cout << "Largest String: " << largest << endl;
	cout << "Length: " << lenl << endl;


	return 0;
}








