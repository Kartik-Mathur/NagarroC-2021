// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0 ; i < 5 ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int key;
	cin >> key;
	// bool isKeyFound = false;
	int i;
	for (i = 0 ; i < n ; i++) {
		if (arr[i] == key) {
			// Key is Found
			cout << "Key found at " << i << endl;
			// isKeyFound = true;
			return 0; // means exit the program
			break;
		}
	}

	if (i == n) {
		cout << "Key not found" << endl;
	}

	for (int i = 0 ; i < n ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	// if (isKeyFound == false) {
	// 	cout << "Key not found" << endl;
	// }

	return 0;
}












