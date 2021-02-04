// sizeof.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	float f = 10.23;
	char ch = 'A';
	double d = 10.11;
	bool b = true;

	cout << "Int " << sizeof(a) << endl;
	cout << "Float " << sizeof(f) << endl;
	cout << "Char " << sizeof(ch) << endl;
	cout << "Double " << sizeof(d) << endl;
	cout << "Bool " << sizeof(b) << endl;

	cout << sizeof(10.11) << endl;
	return 0;
}