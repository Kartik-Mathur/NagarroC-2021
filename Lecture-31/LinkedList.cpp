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

void BreakTheCycle(node* head, node* f) {
	node* s = head;
	node* prev = head;

	while (prev->next != f) {
		prev = prev->next;
	}

	while (f != s) {
		prev = f;
		f = f -> next;
		s = s -> next;
	}
	prev->next = NULL;
}

bool isCyclic(node* head) {
	node* f, *s;
	f = s = head;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;

		if (f == s) {
			BreakTheCycle(head, f);
			return true;
		}
	}
	return false;
}



void CreateCycle(node* head) {

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head->next->next;
}

int main() {
	node* head;
	head = NULL;

	// Complete the fuction and then remove the exception below
	// throw "Function is not implemented";
	insertAtEnd(head, 1);
	insertAtEnd(head, 2);
	insertAtEnd(head, 3);
	insertAtEnd(head, 4);
	insertAtEnd(head, 5);
	insertAtEnd(head, 6);
	insertAtEnd(head, 7);
	insertAtEnd(head, 8);
	if (isCyclic(head)) {
		cout << "Cycle is Present" << endl;
	}
	else {
		cout << "Cycle is Not Present" << endl;
	}

	print(head);

	CreateCycle(head);

	if (isCyclic(head)) {
		cout << "Cycle is Present" << endl;
	}
	else {
		cout << "Cycle is Not Present" << endl;
	}
	print(head);


	return 0;
}






