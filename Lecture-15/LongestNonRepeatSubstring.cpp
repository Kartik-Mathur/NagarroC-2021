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
	// Example: CcodingbLlock, output: CcodingbLl(10), C and c are not considered as same
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

int solve1(char* a) { // Here upper case and lower case doesnt matter
	// Example: CcodingbLlock, output: codingbL(8), C and c are considered as same
	int i = 0, j = 0;
	int freq[256] = {0};
	int ans = 0;
	while (a[j] != '\0') {
		if (a[j] >= 'A' and a[j] <= 'Z') {
			a[j] = a[j] ^ 32; // a[j] = a[j] ^ ' ';
		}
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
	for (int i = 0 ; a[i] != '\0' ; i++) {
		cout << (char)(a[i] ^ ' ');
	}
	cout << endl;
	// cout << solve(a) << endl;
	return 0;
}
















