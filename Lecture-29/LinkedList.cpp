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

void insertAtEnd(node* &head, node* &tail, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void insertAtMid(node* &head, node* &tail, int d, int pos) {
	if (pos == 0) {
		insertAtFront(head, tail, d);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, d);
	}
	else {
		node* temp = head;
		for (int i = 1; i < pos ; i++) {
			temp = temp->next;
		}
		node* n = new node(d);
		n->next = temp->next;
		temp->next = n;
	}
}

void search(node* head, int key) {
	// bool isKeyPresent = false;
	while (head != NULL) {
		if (head->data == key) {
			cout << "Key is present" << endl;
			// isKeyPresent = true;
			break;
		}
		head = head->next;
	}
	if (head == NULL) {
		cout << "Key is not present" << endl;
	}
}

bool searchRecursively(node* head, int key) {
	// base case
	if (head == NULL) {
		return false;
	}

	// recursive case
	if (head->data == key) {
		// cout << "Key Present" << endl;
		return true;
	}
	else {
		return searchRecursively(head->next, key);
	}

}

void print(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}



int main() {

	node* head, *tail;
	head = tail = NULL;

	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 1);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);


	print(head);
	insertAtMid(head, tail, 100, 10);
	print(head);
	search(head, 60);
	bool ans = searchRecursively(head, 30);
	if (ans) {
		cout << "Key Found" << endl;
	}
	else {
		cout << "Key Not Found" << endl;
	}
	cout << lengthLL(head) << endl;

	return 0;
}






