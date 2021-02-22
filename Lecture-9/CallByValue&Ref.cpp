// CallByValue&Ref
#include <iostream>
using namespace std;

// Call By Value
// void update(int x) {
// 	x = x + 1;
// 	// cout << "Inside function : " << x << endl;
// }


// Call by Reference
void update(int &x) {
	x = x + 1;
	// cout << "Inside function : " << x << endl;
}

int main() {

	int a = 1;
	cout << "Before Updation " << a << endl; // 1

	update(a);

	cout << "After Updation " << a << endl;



	return 0;
}
