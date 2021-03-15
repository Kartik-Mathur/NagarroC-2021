// LongestSubstring.cpp
#include <iostream>
using namespace std;

bool isValid(int *freq) {
	for (int i = 0 ; i < 256 ; i++) {
		if (freq[i] > 1)
		{
			return false;
		}
	}
	return true;
}

int solve(char* a) {
	int i = 0, j = 0;
	int freq[256] = {0};
	int ans = 0;
	while (a[j] != '\0') {
		freq[a[j]]++; // a[j] -> 'a':97, 'A':65

		if (isValid(freq)) {
			ans = max(ans, j - i + 1);
		}
		else {
			while (isValid(freq) != true) {
				freq[a[i++]]--;
			}
		}
		j++;
	}

	return ans;
}

int main() {

	char a[100];
	cin >> a;

	cout << solve(a) << endl;

	return 0;
}
















