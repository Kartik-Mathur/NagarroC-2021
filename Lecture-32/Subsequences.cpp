// Subsequences.cpp
// #include <iostream>
// #include <cstring>
// #include <cmath>
#include <bits/stdc++.h>
using namespace std;
vector<string> v;

void Subsequences(char *inp, int i, int mv) {
	// base case
	if (i == mv) {
		return;
	}
	// recursive case
	int j = i;
	int indx = 0;
	string s;
	bool isThereCharactersInS = false;
	while (j != 0) {
		if ((j & 1) == 1) {
			// cout << inp[indx];
			s.push_back(inp[indx]);
			isThereCharactersInS = true;
		}
		j = j >> 1;
		indx++;
	}
	// if (isThereCharactersInS) {
	v.push_back(s);
	// }
	// cout << endl;
	Subsequences(inp, i + 1, mv);
}

void Subsequences1(char *inp) {
	int n = pow(2, strlen(inp));
	for (int i = 0 ; i < n ; i++) {
		int j = i;
		int indx = 0;

		while (j != 0) {
			if ((j & 1) == 1) {
				cout << inp[indx];
			}
			j = j >> 1;
			indx++;
		}
		cout << endl;
	}
}

int main() {
	char inp[4] = "abc";
	int max_val = pow(2, strlen(inp));
	Subsequences(inp, 0, max_val);
	// Subsequences1(inp);
	sort(v.begin(), v.end());
	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << endl;
	}
	return 0;
}
















