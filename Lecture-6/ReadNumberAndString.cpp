// ReadNumberAndString.cpp
#include <iostream>
using namespace std;

int main() {

	char a[100];
	int n;
	// 10
	// Hello World
	cin >> n;
	// Now the first character after an integer will cause an issue,
	// so we should ignore that character
	// cin.ignore(); // This will ignore the a single character
	cin.get(); // It will read a character, and if I will not store it
	// this means character got ignored
	cin.getline(a, 100);

	cout << n << endl;
	cout << a << endl;

	return 0;
}