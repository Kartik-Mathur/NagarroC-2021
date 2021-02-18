#include <iostream>
using namespace std;

int main() {

	char a[100] = "CodingBlocks";
	int len = 12;
	int k;
	cout << "String Initially: " << a << endl;
	cin >> k;

	int i = len ;
	while (i >= 0) {
		a[i + k] = a[i];
		i--;
	}

	// cout << "After Shifting: " << a << endl;

	i = 0;
	int j = len;
	while (j < len + k) {
		a[i] = a[j];
		i++;
		j++;
	}

	// cout << "Bring K characters to front: " << a << endl;

	a[len] = '\0';
	cout << "Final String: " << a << endl;
	return 0;
}










