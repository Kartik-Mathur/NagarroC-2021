// ReverseQueue.cpp
#include <iostream>
#include <queue>
using namespace std;

void ReverseQueue(queue<int> &q) {
	if (q.empty()) {
		return;
	}

	int element = q.front();
	q.pop();
	ReverseQueue(q);
	q.push(element);
}

void PrintQueue(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	PrintQueue(q);
	ReverseQueue(q);
	PrintQueue(q);
	return 0;
}
















