// Permutations.cpp
#include <iostream>
using namespace std;

void Permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') { // when would you not print any permutation? when there are no more characters left
		cout << a << endl;
		return;
	}
	// recursive case
	for (int j = i ; a[j] != '\0' ; j++) {
		swap(a[i], a[j]);
		Permutations(a, i + 1);
		// once you return from the recursion
		swap(a[i], a[j]); // backtracking
	}
}

int main() {

	char a[100] = "abc";
	Permutations(a, 0);

	return 0;
}
















