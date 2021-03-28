#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

// Welcome to Coding Blocks
// Blocks Coding to Welcome
int main() {

	string s;
	s = "Welcome To Coding Blocks we are learning string";
	// "Welcome To Coding Blocks."
	string ans;
	vector<string> v;
	char a[100005];
	strcpy(a, s.c_str()); // If this thing does not work, do it manually create a function for it
	// that would be better
	cout << a << endl;

	char* ptr = strtok(a, " ");
	cout << ptr << endl;
	while (ptr != NULL) { // When the iteration over the entire string completes
		// strtok will return NULL
		cout << ptr << endl;
		string x(ptr); // This is how we can initialize a string using character array
		// Converted the character array to string and then insert it to the vector of strings
		v.push_back(x);

		ptr = strtok(NULL, " ");
	}

	// reverse(v.begin(), v.end());
	int i = 0, j = v.size() - 1;
	while (i < j) {
		swap(v[i++], v[j--]);
	}

	for (int i = 0 ; i < v.size() ; i++) {
		if (i != v.size() - 1) {
			ans += v[i] + ' ';
		}
		else {
			ans += v[i];
		}
	}

	cout << ans << endl;

	return 0;
}
















