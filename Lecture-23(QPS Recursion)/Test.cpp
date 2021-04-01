#include <iostream>
#include <cstring>
using namespace std;

string removeDuplicates(string s, int i) {
	// base case
	if (i == s.length() - 1) {
		return s;
	}

	// recursive case
	string smallerAns = removeDuplicates(s, i + 1);
	if (smallerAns[i] == smallerAns[i + 1]) {
		smallerAns =  smallerAns.substr(0, i) + smallerAns.substr(i + 1);
	}

	return smallerAns;
}


int main() {

	string s = "heeeellllooo";

	cout << removeDuplicates(s, 0) << endl;

	return 0;
}
















