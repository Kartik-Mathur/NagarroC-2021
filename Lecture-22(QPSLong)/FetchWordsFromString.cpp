// FetchWordsFromString.cpp
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {

	string s;
	s = "Welcome To Coding Blocks we are learning strings.";
	// string s = "  Hello....$$$$$.    World Learning     Strings ";
	// Convert this string to character array, there are multiple ways.
	// User is going to input the string, thus I dont know the size of it
	// In this case always go for vector

	char a[100005];
	strcpy(a, s.c_str());
	cout << a << endl;

	char* ptr = strtok(a, " .$");
	cout << ptr << endl;
	while (ptr != NULL) { // When the iteration over the entire string completes
		// strtok will return NULL

		cout << ptr << endl;
		ptr = strtok(NULL, " .$");
	}





	// vector<char> a(s.length() + 1);
	// a[s.length()] = '\0';

	// for (int i = 0 ; i < s.length() ; i++) {
	// 	a[i] = s[i];
	// }

	// for (int i = 0 ; a[i] != '\0' ; i++) {
	// 	cout << a[i];
	// }
	// cout << endl;
	return 0;
}
















