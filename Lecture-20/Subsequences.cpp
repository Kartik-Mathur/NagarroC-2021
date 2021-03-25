#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
vector<string> v;

string x = "abc";

void subsequences(char *inp, int i, char *out, int j) {
	// base case
	if (inp[i] == '\0') {
		out[j] = '\0';
		// string s(out);
		// v.push_back(s);
		// if (s > x) {
		cout << out << endl;
		// }
		return;
	}

	// recursive
	// 1. Include the ith character and ask the recursion to do the work for smaller string(i+1)
	out[j] = inp[i];
	subsequences(inp, i + 1, out, j + 1);

	// 2. Exclude the ith character and ask the recursion to do the work for smaller string(i+1)
	// don't copy at jth position
	subsequences(inp, i + 1, out, j);
}

int main() {

	char inp[100], out[100];
	cin >> inp;

	subsequences(inp, 0, out, 0);
	cout << "Printing Vector" << endl;
	// sort(v.begin(), v.end());
	// for (int i = 0 ; i < v.size() ; i++) {
	// 	if (v[i] > x) {
	// 		cout << v[i] << endl;
	// 	}
	// }
	return 0;
}
















