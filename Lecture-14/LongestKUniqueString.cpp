// LongestKUniqueString.cpp
#include <iostream>
using namespace std;

int howManyUniqueChar(int *freq) {
	int cnt = 0;
	for (int i = 0 ; i < 26 ; i++) {
		if (freq[i] > 0) {
			cnt++;
		}
	}
	return cnt;
}

void solve(char *a, int k) {
	int i = 0, j = 0;
	int freq[26] = {0};
	int ans = -1;
	while (a[j] != '\0') {

		freq[a[j] - 'a']++;
		if (howManyUniqueChar(freq) == k) {
			int window_len = j - i + 1;
			ans = max(ans, window_len);
		}
		else if (howManyUniqueChar(freq) > k) {
			while (a[i] != '\0' and howManyUniqueChar(freq) > k) {
				freq[a[i] - 'a']--;
				i++;
			}
		}

		j++;
	}

	cout << "Max Length: " << ans << endl;
}


int main() {

	char a[] = "ddddd";


	solve(a, 1);

	return 0;
}
















