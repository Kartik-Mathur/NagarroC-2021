// vectors.cpp
#include <iostream>
using namespace std;

class Vector {
public:
	int *arr;
	int ms;
	int cs;

	Vector(int s = 2) {
		ms = s;
		cs = 0;
		arr = new int[ms];
	}

	void push_back(int data) {
		if (cs == ms) {
			int *oldarr = arr;
			int  oldms = ms;

			ms = 2 * ms;
			arr = new int[ms];
			// Copy the oldarr into the arr
			for (int i = 0 ; i < oldms ; i++) {
				arr[i] = oldarr[i];
			}

			delete []oldarr;
			oldarr = NULL;
		}

		arr[cs] = data;
		cs++;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	// Operator Overloading needs to be done!
	int operator[](int i) {
		return arr[i];
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ms;
	}
};

int main() {

	Vector v;

	v.push_back(10);
	v.push_back(1);
	v.push_back(110);
	v.push_back(20);
	v.push_back(4);


	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.size() << endl; // 5
	cout << v.capacity() << endl; // 8


	return 0;
}
















