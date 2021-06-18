#include <iostream>
#include <vector>
using namespace std;

class minheap {
	vector<int> v;

	void heapify(int i) {
		int min = i;
		int left = 2 * i;
		int right = 2 * i + 1;

		if (left<v.size() and v[min] > v[left]) {
			min = left;
		}
		if (right<v.size() and v[min] > v[right]) {
			min = right;
		}

		if (min != i) {
			swap(v[min], v[i]);
			heapify(min);
		}
	}

public:
	minheap() {
		v.push_back(-1); // Insert -1 by default, so that 0th Index is not
		// going to get any valid element..
	}

	void push(int d) {
		v.push_back(d);
		int i = v.size() - 1;
		int p = i / 2;

		while (p > 0 and v[i] < v[p]) {
			swap(v[i], v[p]);
			i = p;
			p /= 2;
		}
	}

	int top() {
		return v[1];
	}

	void pop() { // This deletes the minimum element
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}

};

int main() {

	minheap h;

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
















