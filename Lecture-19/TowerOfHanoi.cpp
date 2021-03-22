// TowerOfHanoi.cpp
#include <iostream>
using namespace std;

void toh(int n, char source, char helper, char destination) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	// 1. Move n-1 disks from source to helper
	toh(n - 1, source , destination , helper);
	// 2. Move nth disk manually from source to destination
	cout << "Take disk " << n << " from " << source << " to " << destination << endl;
	// 3. Move n-1 disks from helper to destination
	toh(n - 1, helper, source, destination);
}

int main() {
	int n;
	cin >> n;

	toh(n, 'A', 'B', 'C');

	return 0;
}
















