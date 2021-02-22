// Functions
#include <iostream>
using namespace std;

void update(int *x) {
	*x = *x + 1;
}

int main() {

	int a = 1;

	cout << "Before Updation " << a << endl;

	update(&a); // &a: address of bucket a


	cout << "After Updation " << a << endl;

	return 0;
}