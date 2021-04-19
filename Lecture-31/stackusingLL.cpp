// stackusingLL.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

class Stack {
	node* head;
	int cs;
public:

	Stack() {
		head = NULL;
		cs = 0;
	}

	void push(int d) {
		node* temp = new node(d);

		temp->next = head;
		head = temp;
		cs++;
	}

	void pop() {
		if (head == NULL) {
			return;
		}
		node* temp = head;
		head = head->next;
		cs--;
		delete temp;
	}

	int top() {
		return head->data;
	}

	bool empty() {
		return head == NULL ? true : false;
	}

	int size() {
		return cs;
	}
};

int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
















