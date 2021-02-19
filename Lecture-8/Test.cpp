#include <iostream>
using namespace std;


int main() {

	// int a = 10;
	int a;
	a = 65;
	float f = 10.11;
	char ch = 'A';

	int * aptr = (int*)&a; // Initialization of a pointer

	float *fptr; // Create a Pointer
	fptr = (float*)&f; // Assignment

	char *chptr = &ch;
	// cout << sizeof(aptr) << endl;
	// cout << sizeof(fptr) << endl;
	// cout << sizeof(chptr) << endl;
	cout << &a << endl;
	cout << aptr + 1 << endl;
	// cout << &f << endl;
	// cout << fptr << endl;
	cout << (int*)&ch << endl;
	cout << (float*)(chptr + 1) << endl;


	return 0;
}