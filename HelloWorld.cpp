#include <iostream> // HeaderFile->To take input and to print on console
using namespace std; // We are using standard namespace

int main() { // Start
	// Input from the user
	// syntax "cin>>"
	// int x, y;
	// x = 0;
	// y = 0; // Assignment
	int x = 0, y = 0; // Initialization of x and y

	cin >> x >> y;
	cout << "User has given x: " << x << endl;
	cout << "User has given y: " << y << endl;

	// Create a variable/bucket
	int a; // Bucket creation
	a = 10; // Assignment of bucket a
	cout << "Value of a: " << a << '\n';

	// Initialization of bucket
	int b = 20; // While creating the bucket giving value to it
	cout << "Value of b: " << b << endl;

	// cout << "Value of a ";
	// cout << a;
	// cout << '\n';
	cout << "Hello World"; // output on console
	cout << endl; // '\n' == endl
	return 0; // return 0 from main means that program is successfully executed
}

