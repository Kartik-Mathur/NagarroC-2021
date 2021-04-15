#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	// node(int d): data(d), next(NULL) {}
	node(int d) {
		data = d;
		next = NULL;
	}
};

int main() {
	node a(1);
	node b(2);
	node c(3);

	a.next = &b;
	b.next = &c;


	cout << a.data << endl;
	// cout << (*a.next).data << endl;
	// (*a.next).data == a.next -> data
	cout << a.next->data << endl;
	cout << a.next->next->data << endl;



	return 0;
}