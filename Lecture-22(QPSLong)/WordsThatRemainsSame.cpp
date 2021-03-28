// WordsThatRemainsSame.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void RotateString(string &s) {
	s = s.substr(1) + s[0]; // Hello
	// ello + H: elloH
}

void RotateString1(string &s, int k, int len) {
	s += s;
	s = s.substr(k, len);
}

int main() {

	string s = "Hello lol Wor aaa";
	int k = 3;

	vector<string> v;
	char a[100005];
	strcpy(a, s.c_str());


	char* ptr = strtok(a, " ");

	while (ptr != NULL) {
		string x(ptr);
		v.push_back(x);

		ptr = strtok(NULL, " ");
	}
	// v: "Hello","World"

	vector<string> v1(v); // v1 :"Hello","World"--> After Rotation: "loHel","ldWor"

	for (int i = 0 ; i < v1.size() ; i++) {
		RotateString1(v[i], k % v[i].length(), v[i].length());
		// for (int j = 1; j <= k ; j++) {
		// 	RotateString(v1[i]);
		// }
	}

	int ans = 0;
	for (int i = 0 ; i < v.size() ; i++) {
		if (v[i] == v1[i]) {
			ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
















