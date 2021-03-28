// UpdateCharsToMakeUnique.cpp
#include <iostream>
using namespace std;

int main() {

	string s = "aaaaaaabbbc";
	// To update the characters, we need to make sure that string length cannot exceed 26
	// if only small latin characters are allowed
	int ans = 0;
	int freq[26] = {0};

	for (int i = 0 ; i < 26 ; i++) {
		freq[s[i] - 'a']++;
	}

	for (int i = 0 ; i < 26 ; i++) {
		// ans += freq[i] > 1 ? freq[i] - 1 : 0;
		if (freq[i] > 1) {
			ans += freq[i] - 1;
		}
	}
	cout << ans << endl;
	return 0;
}

















