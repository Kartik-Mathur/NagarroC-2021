// CountCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	int characters = 0, special = 0, digits = 0, whitespaces = 0;
	// characters-> 'a'-'z' and 'A'-'Z'
	// whitespaces -> ' ','\t','\n'
	// digits -> '0'-'9'
	// special-> '@','!'

	char ch;
	// cin>>ch;
	ch = cin.get();

	while (ch != '$') { // and == &&, or == ||
		if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z') ) {
			characters++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits ++;
		}
		else if (ch == ' ' or ch == '\t' or ch == '\n') {
			whitespaces ++;
		}
		else {
			special ++;
		}

		ch = cin.get();
	}
	cout << "Special " << special << endl;
	cout << "whitespaces " << whitespaces << endl;
	cout << "digits " << digits << endl;
	cout << "characters " << characters << endl;
	cout << endl;
	return 0;
}








