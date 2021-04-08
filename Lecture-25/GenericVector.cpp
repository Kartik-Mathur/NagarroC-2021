// vectors.cpp
#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
	T *arr;
	int ms;
	int cs;

	Vector(int s = 2) {
		ms = s;
		cs = 0;
		arr = new T[ms];
	}

	void push_back(T data) {
		if (cs == ms) {
			T *oldarr = arr;
			int  oldms = ms;

			ms = 2 * ms;
			arr = new T[ms];
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
	T operator[](int i) {
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

	Vector<float> v;

	// v.push_back('A');
	// v.push_back('B');
	// v.push_back('C');
	// v.push_back('D');
	// v.push_back(1);
	// v.push_back(110);
	// v.push_back(20);
	// v.push_back(4);
	v.push_back(1.11);
	v.push_back(110.12);
	v.push_back(20.34);
	v.push_back(4.454);

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.size() << endl; // 4
	cout << v.capacity() << endl; // 4


	return 0;
}
















