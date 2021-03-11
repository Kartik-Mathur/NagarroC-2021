// String.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// string s;
	// cin >> s; // Ignore the white spaces
	// getline(cin, s); // To take whitespaces input in string
	// getline(cin, s, '$'); // To take whitespaces input in string

	// String Initialization
	// 1.st Way of init
	char a[] = "Welcome to CB";
	// string is a class and s1 is an object of string class
	string s1(a);
	// 2nd Way of init

	string s2 = "Welcome to Coding Blocks";
	// 3rd Way of init
	string s3 = s2; // or string s3(s2);

	// cout << s << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string s;
	s.push_back('H');
	s.push_back('e');
	s.push_back('l');
	s.push_back('l');
	s.push_back('o');
	s.pop_back();
	cout << s << endl;

	s.clear();
	s.push_back('K');
	cout << s << endl;

	string x = "Hello";
	string y = "World";

	x += y;
	cout << x << endl;

	for (int i = 0 ; i < x.length() ; i++) {
		cout << x[i] << "-";
	}
	cout << endl;

	cout << stol("8977") << endl;

	return 0;
}
















