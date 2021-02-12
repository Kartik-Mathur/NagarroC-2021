// ReverseAString.cpp
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
		swap(a[i++], a[j--]);
		// i++;
		// j--;
	}
	cout << "After Reverse : " << a;
	cout << endl;
	return 0;
}