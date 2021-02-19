// SumOfNumbers.cpp
#include <iostream>
using namespace std;

// Function syntax:
// datatype name_function (arguments){
// Work to be done
// }
// Print the sum, we don't have to return anything!!!!
void sum(int a, int b) { // Multiple arguments are comma seperated
	cout << "Sum : ";
	cout << a + b << endl;
}

int sum1(int x, int y) {
	// int ans = x + y;
	// return ans;
	return (x + y);
}

int main() {

	int a = 10, b = 20;

	// cin >> a >> b;

	// sum(a, b); // Invoke sum
	sum(10, 30);
	sum(10, 40);
	sum(10, 50);

	int result = sum1(a, b);
	cout << "Inside main : " << result << endl;
	return 0;
}









