// StackUsingQueues.cpp
#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:
	void push(int d) {
		if (q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else if (q1.empty() and !q2.empty()) {
			q2.push(d);
		}
	}

	void pop() {
		if (q1.empty() and q2.empty()) {
			cout << "Stack Underflow" << endl;
		}
		else if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else if (q1.empty() and !q2.empty()) {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
	}

	int top() {
		int x;
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}
			x = q1.front();
			q1.pop();
			q2.push(x);
		}
		else if (q1.empty() and !q2.empty()) {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}
			x = q2.front();
			q2.pop();
			q1.push(x);
		}
		return x;
	}

	bool empty() {
		return q1.empty() and q2.empty();
		// if(q1.empty() and q2.empty()){
		// 	return  true;
		// }
		// else{
		// 	return false;
		// }
	}
};

int main() {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	return 0;
}











