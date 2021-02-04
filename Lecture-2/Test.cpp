#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, no, sum;
	cout << "Enter N ";
	cin >> n;

	sum = 0;// Assignment of 0 to sum
	int i = 1; // Initialization
	int largest = INT_MIN;
	int smallest = INT_MAX;
	while (i <= n) { // Condition
		cin >> no;
		sum = sum + no;
		if (no > largest) {
			largest = no;
		}
		if (no < smallest) {
			smallest = no;
		}

		i = i + 1; // Updation
	}
	int mean = sum / n;
	cout << "Mean : " << mean << endl;
	cout << "Smallest : " << smallest << endl;
	cout << "Largest : " << largest << endl;

	return 0;
}