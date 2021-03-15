// SumOfString.cpp
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
	for (int i = 0 ; i < s.length() ; ) {
		val.clear();

		if (s[i] >= '0' and s[i] <= '9') {
			while (s[i] >= '0' and s[i] <= '9') {
				val.pb(s[i++]);
			}
			ans += stringToInt(val); // stol
		}
		else {
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
















