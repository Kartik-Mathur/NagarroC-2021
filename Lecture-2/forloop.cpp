// forloop.cpp
#include <iostream>
using namespace std;

int main() {


	// int i = 1; // Initialization
	// while (i <= 10) { // Condition check
	// 	cout << i << ' ';
	// 	i = i + 1; // Updation
	// }

	// cout << endl;

	// Syntax:
	// for(initialization ; condition check ; updation){
	// Work statements
	//}
	int i;

	for (i = 1 ; i <= 20 ; i = i + 1) {

		cout << i << ' ';
	}
	cout << endl;

	i = 1 ;
	for (; i <= 20 ;) {

		cout << i << ' ';

		i = i + 1;
	}
	cout << endl;


	for (i = 20 ; i >= 1 ; i = i - 1) {
		cout << i << ' ';
	}
	cout << endl;

	return 0;
}








