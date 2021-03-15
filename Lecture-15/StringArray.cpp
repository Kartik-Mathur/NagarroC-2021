// StringArray.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s[100];

	int n;
	cin >> n;

	for (int i = 0 ; i < n ; i++) {
		cin >> s[i];
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < s[i].length() ; j++) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}

	string a = "Hello";
	string b = "Aorld";

	if (a > b) {
		cout << "a is greater than b" << endl;
	}
	else {
		cout << "b is greater than a" << endl;
	}

	return 0;
}
















