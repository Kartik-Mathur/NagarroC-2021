// i/p: welcome to coding blocks.
// o/p: Welcome To Coding Blocks.
#include <iostream>
using namespace std;

int main() {

	string s = "welcome to coding blocks";

	for (int i = 0 ; i < s.length() ; i++) {
		if (i == 0) {
			if (s[i] >= 'a' and s[i] <= 'z') {
				s[i] ^= 32;
			}
		}
		else if (s[i - 1] == ' ') {
			if (s[i] >= 'a' and s[i] <= 'z') {
				s[i] ^= 32;
			}
		}
	}

	cout << s << endl;
	return 0;
}
















