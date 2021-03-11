// ExtractNumber.cpp
#include <iostream>
using namespace std;
#define ll long long

string solve(string s) {

	string ans;
	ll maxv = 0; // ans is empty so,its value will be zero
	string val;
	bool isAnswerPossible = false;
	bool is9Present;
	for (int i = 0 ; i < s.length() ;) {
		val.clear();
		is9Present = false;
		if (s[i] >= '0' and s[i] <= '9') {
			while ( i < s.length() and (s[i] >= '0' and s[i] <= '9') ) {
				val.push_back(s[i]);
				if (s[i] == '9') {
					is9Present = true;
				}
				i++;
			}

			if (is9Present == false) {
				if (stol(val) >= maxv) { // stol converts string to long long
					ans = val;
					maxv = stol(val);
					isAnswerPossible = true;
				}
			}

		}
		else {
			i++;
		}
	}
	if (isAnswerPossible == false) {
		return "-1";
	}
	return ans;
}

int main() {

	string s = "HelloCodinglocks8086and564&&8765ll90997";

	cout << solve(s) << endl;

	return 0;
}
















