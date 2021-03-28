// MinimumRotationsForSameString.cpp
#include <iostream>
using namespace std;
// Lets consider clockwise rotations
// Coding: 6
// ababab: 2 (bababa, ababab)
// aaaaaa: 1
int main() {

	string s = "aaaaaa";
	string s_copy = s;
	int len = s.length(); // len : 6

	s += s; // s: CodingCoding // len: 12

	for (int i = 1 ; i <= len ; i++) {
		string x = s.substr(i, len); // Coding
		if (x == s_copy) {
			cout << "Rotate it " << i << " times" << endl;
			break;
		}
	}

	return 0;
}
















