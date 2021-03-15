// StringSumNegNumbers.cpp
#include <iostream>
#include <cstring>
using namespace std;
#define pb push_back

int stringToInt(string s) {
	int ans = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		char ch = s[i];
		int digit = ch - '0';
		ans = ans * 10 + digit;
	}
	return ans;
}

int solve(string s) {
	int ans = 0;
	string val;
	bool isNegative = false;

	for (int i = 0 ; i < s.length() ; ) {
		val.clear();
		if (s[i] == '-') {
			isNegative = true;
			i++;
			if (i == s.length()) {
				break;
			}
		}
		if (s[i] >= '0' and s[i] <= '9') {
			while (s[i] >= '0' and s[i] <= '9') {
				val.pb(s[i++]);
			}
			int x = stringToInt(val); // stoi
			if (isNegative == true) {
				ans += -1 * x;
				isNegative = false;
			}
			else { // isNegative == false
				ans += x;
			}
		}
		else {
			isNegative = false;
			i++;
		}
	}
	return ans;
}

int main() {

	string s;
	cin >> s;

	cout << solve(s) << endl;

	return 0;
}














