// structure.cpp
#include <iostream>
using namespace std;

struct car
{
	int arr[100];
	int a;
	float f;
};

int main() {

	car c;
	c.a = 10;
	c.f = 10.11;
	for (int i = 0 ; i < 10 ; i++) {
		c.arr[i] = i + 1;
	}

	cout << c.a << endl;
	cout << c.f << endl;
	for (int i = 0 ; i < 10 ; i++) {
		cout << c.arr[i] << " ";
	}


	return 0;
}
















