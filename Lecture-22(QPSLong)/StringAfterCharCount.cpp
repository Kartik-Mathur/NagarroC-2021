// WeAreLearningString
// i/p: ch:'e' and count:3, o/p: arningString
#include <iostream>
using namespace std;

int main() {

	string s = "WeAreLearningString";

	int c = 0;
	int cnt = 3;
	char ch = 'e';
	int i;
	for (i = 0 ; i < s.length() ; i++) {
		if (s[i] == ch and c < cnt) {
			c++;
		}
		else if (c == cnt) {
			break;
		}
	}

	// string x = s.substr(i);
	string x;
	for (int j = i ; j < s.length() ; j++) {
		x.push_back(s[j]);
	}
	cout << x << endl;

	return 0;
}
















