// PrintNumbersTillN.cpp
// Functions.cpp
#include <iostream>
using namespace std;

// Function syntax:
// datatype name_function (arguments){
// Work to be done
// }
// void printNumbers(int n): Function Declaration
// Inside curly braces of a function: Function definition

// Forward declaration
// void printNumbers(int );
void printNumbers(int x);

int main() {

	int n;
	cin >> n;

	printNumbers(n); // Call the function
	printNumbers(n); // Invoke the function
	printNumbers(n); // Invoke the function

	// 1. More organized code
	// 2. Readability Improves
	// 3. Reusable piece of code

	return 0;
}

void printNumbers(int n) {
	cout << "Inside Function" << endl;
	for (int i = 0 ; i < n ; i++) {
		cout << i << " ";
	}
	cout << endl;
}

