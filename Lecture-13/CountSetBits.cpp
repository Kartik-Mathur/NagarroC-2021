// CountSetBits.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int counter = 0;
	while (n != 0) {
		n = n & (n - 1);
		counter++;
	}

	cout << "Set Bits: " << counter << endl;

	// int count_setbits =  0, count_unset = 0;

	// while (n != 0) {
	// 	if ((n & 1) == 1) {
	// 		count_setbits++;
	// 	}
	// 	else {
	// 		count_unset++;
	// 	}

	// 	n = n >> 1;
	// }


	// cout << "Sets Bits: " << count_setbits << endl;
	// cout << "UnSets Bits: " << count_unset << endl;

	return 0;
}












