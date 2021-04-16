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

int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtEnd(node* &head, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = n;
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

void print(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

node* mid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}

void ReverseLL(node* &head) {
	node* c = head, *prev = NULL, *n;
	while (c != NULL) {
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}

int main() {
	node* head;
	head = NULL;

	insertAtEnd(head, 1);
	insertAtEnd(head, 2);
	insertAtEnd(head, 3);
	insertAtEnd(head, 4);
	insertAtEnd(head, 5);
	insertAtEnd(head, 6);
	insertAtEnd(head, 7);
	print(head);
	ReverseLL(head);
	print(head);
	// node* ans = mid(head);
	// cout << "Middle element is " << ans->data << endl;

	return 0;
}






