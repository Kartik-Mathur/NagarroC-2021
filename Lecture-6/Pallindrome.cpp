// Pallindrome
#include <iostream>
using namespace std;

int main() {
	char a[100];
	cin >> a;
	int i, j;
	int len;
	for (len = 0 ; a[len] != '\0' ; len++) {}

	i = 0; j = len - 1;

	while (i < j) {
		if (a[i] != a[j]) {
			cout << "Not a Pallindrome" << endl;
			break;
		}
		i++;
		j--;
	}


	if (i >= j) {
		cout << "Pallindrome" << endl;
	}
	// else {
	// 	cout << "Not a Pallindrome" << endl;
	// }

	return 0;
}