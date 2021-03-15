// RearrageStringCharacters.cpp
#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

string solve(string s) {
	int freq[26] = {0};
	for (int i = 0 ; i < s.length() ; i++) {
		freq[s[i] - 'a'] += 100;
	}

	for (int i = 0 ; i < 26 ; i++) {
		if (freq[i] > 0) {
			freq[i] += i;
		}
	}
	sort(freq, freq + 26, compare);

	char a[1000];
	a[s.length()] = '\0';

	int indx = 0;
	int n = s.length();
	for (int i = 0; i < 26 ; i++) {
		int count = freq[i] / 100;
		char ch = freq[i] % 100 + 'a';
		if (count > n / 2 + 1) {
			return "Not Possible";
		}
		if (freq[i] > 0) {
			for (int x = 0 ; x < count ; x++) {
				a[indx] = ch;
				indx += 2;
				if (indx >= n) {
					indx = 1;
				}
			}
		}
	}
	string ans(a);
	return ans;
}

int main() {

	string s;
	cin >> s;

	cout << solve(s) << endl;


	return 0;
}
















