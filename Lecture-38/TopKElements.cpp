// TopKElements.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class comparator {
public:
	int operator()(int a, int b) { // Functor
		return a > b;
	}
};

void printHeap(priority_queue<int, vector<int>, comparator > h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

	priority_queue<int, vector<int>, comparator > h; // Minheap, comparator: Class
	int data;
	int cs = 0;
	int k = 3;
	while (1) {
		cin >> data;

		if (data == -1) {
			// Print the heap
			printHeap(h);
		}
		else {
			if (cs < k)	{
				h.push(data);
				cs++;
			}
			else {
				if (h.top() < data) {
					h.pop();
					h.push(data);
				}
			}
		}

	}


	return 0;
}
















