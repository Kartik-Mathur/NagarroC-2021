// Permutations ?
#include <iostream>
using namespace std;

int main() {

	char a[100] = "abdbca";
	char b[100] = "babacd";


	int freq[26] = {0};

	for (int i = 0; a[i] != '\0' ; i++) {
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	// for (int i = 0 ; i < 26 ; i++) {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;
	for (int i = 0; b[i] != '\0' ; i++) {
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx]--;
	}

	// for (int i = 0 ; i < 26 ; i++) {
	// 	cout << freq[i] << " ";
	// }

	// cout << endl;
	bool isPermutation = true;
	// Check whether all the buckets of freq array is 0 or not
	for (int i = 0 ; i < 26 ; i++) {
		if (freq[i] != 0) {
			cout << "Not Permutations" << endl;
			isPermutation = false;
			break;
		}
	}

	if (isPermutation == true) {
		cout << "Permutations" << endl;
	}
	return 0;
}












