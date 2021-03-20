// vectors.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(int a, int b) {
	return a < b;
}

int main() {
	vector<int> v;
	// vector<int> v(10); //vector<int> v(size);
	// Initialization of vector
	// vector <int> v({1, 2, 3, 4, 5});
	// int n = 5;


	int a[] = {5, 4, 6, 7, 43, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0 ; i < n ; i++) {
		v.push_back(a[i]);
	}

	sort(v.begin(), v.end(), comparator);

	for (auto it = v.begin() ; it != v.end() ; it++) { // auto == vector<int>::iterator
		cout << *it << " ";
	}
	cout << endl;


	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;



	// for (int i = 1 ; i <= 9 ; i++) {
	// 	v.push_back(i);
	// }
	// cout << v.capacity() << endl;
	// cout << v.size() << endl;


	return 0;
}
















