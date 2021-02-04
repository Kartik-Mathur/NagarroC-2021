// TypeConversion.cpp
#include <iostream>
using namespace std;

int main() {

	char ch = 'A';
	char ch1 = 'B';

	cout << ch + ch1 << endl;

	char a = ch + ch1;
	cout << a << endl;
	cout << (char)(ch + ch1) << endl;


	return 0;
}