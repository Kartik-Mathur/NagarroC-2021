// LinkedList.cpp
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

void insertAtFront(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		// Linkedlist is empty
		head = tail = n;
	}
	else {
		n -> next = head;
		head = n;
	}
}

void print(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << endl;
}

int main() {

	node* head, *tail;
	head = tail = NULL;

	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 1);
	print(head);
	print(head);

	return 0;
}






