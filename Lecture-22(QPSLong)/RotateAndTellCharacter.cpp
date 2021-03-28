// RotateAndTellCharacter.cpp
#include <iostream>
using namespace std;

// Hello
// Input's that you will get
// 'r', 'k' : rotate string in clockwise by k characters
// 'v', 'k' : Tell the character at kth position?

int main() {

	int t;
	cin >> t;
	string s = "abcde";
	int n = s.length();
	int i = 0;
	while (t--) {
		char ch;
		int u;
		cin >> ch >> u;

		if (ch == 'r') {
			i = (i + u) % n;
		}
		else {
			int pos = (i + u - 1) % n;
			cout << s[pos] << endl;
		}
	}

	return 0;
}
















