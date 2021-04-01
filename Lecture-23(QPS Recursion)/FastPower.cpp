// FastPower.cpp
#include <iostream>
using namespace std;

int fastpower(int a, int b) {
	if (b == 0) { // a^0 == 1
		return 1;
	}

	int smallerAns = fastpower(a, b / 2); // logN steps to solve the problem
	if (b % 2 == 0) {
		return smallerAns * smallerAns;
	}
	else {
		return smallerAns * smallerAns * a;
	}
}

int main() {

	int a, b;
	cin >> a >> b;

	cout << fastpower(a, b) << endl;


	return 0;
}
















