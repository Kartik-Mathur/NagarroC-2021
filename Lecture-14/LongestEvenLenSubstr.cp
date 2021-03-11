// LongestEvenLenSubstr.cpp
#include <iostream>
#include <cstring>
using namespace std;

void solve(string s) {
	int ans = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		for (int j = i + 1; j < s.length(); j++) {
			int len = j - i + 1;
			if ((len & 1) == 0) {
				int p = i, q = j;
				int rsum = 0, lsum = 0;
				while (p < q) {
					lsum += (s[p++] - '0');
					rsum += (s[q--] - '0');
				}

				if (lsum == rsum) {
					ans = max(ans, len);
				}
			}
		}
	}
	cout << ans << endl;
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		solve(s);
	}

	return 0;
}
















