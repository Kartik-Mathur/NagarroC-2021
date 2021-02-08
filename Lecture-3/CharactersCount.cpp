#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;
	// HelloWorld$
	// cin >> ch;	// cin ignores the whitespace characters->(' ','\n','\t'), this cannot read
	// white spaces
	ch = cin.get(); // To take input of white spaces we use cin.get(), this can read white spaces
	// 'H'
	while (ch != '$') {
		cnt++; // 3

		// cin >> ch;
		ch = cin.get();
	}


	cout << "Total Characters " << cnt;

	cout << endl;
	return 0;
}