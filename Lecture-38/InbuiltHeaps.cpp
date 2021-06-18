// InbuiltHeaps.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class comparator {
public:
	int operator()(int a, int b) { // Functor
		return a < b;
	}
};

int main() {

	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > h; // Minheap
	priority_queue<int, vector<int>, comparator > h; // Minheap, comparator: Class

	// comparator obj;
	// obj(a,b); // This looks like a function obj getting called
	// operator overloading

	h.push(10);
	h.push(1);
	h.push(5);
	h.push(2);
	h.push(3);
	h.push(12);
	h.push(0);
	h.push(6);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;

	return 0;
}
















