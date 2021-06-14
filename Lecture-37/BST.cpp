// BST.CPP
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* InsertInBst(node* root, int data) {
	// base case
	if (root == NULL) {
		root = new node(data);
		return root;
	}

	// root node
	if (root->data >= data) {
		root->left = InsertInBst(root->left, data);
	}
	else { // data > root->data
		root->right = InsertInBst(root->right, data);
	}

	return root;
}

node* createBST() {
	int data;
	cin >> data;

	node* root = NULL;
	while (data != -1) {
		root = InsertInBst(root, data);

		cin >> data;

	}

	return root;
}

void preOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// Root Left Right
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	//  Left Root Right
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// Left Right Root
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void levelOrder(node* root) {
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x == NULL) {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			// x can be a valid node
			cout << x->data << " ";
			if (x->left) {
				q.push(x->left);
			}
			if (x->right) {
				q.push(x->right);
			}
		}
	}
}

bool isBST(node* root, int l = INT_MIN, int r = INT_MAX) {
	// base case
	if (root == NULL) {
		return true;
	}

	if (root->data >= l and root->data <= r and isBST(root->left, l, root->data) and isBST(root->right, root->data, r)) {
		return true;
	}
	else {
		return false;
	}

}

class linkedlist {
public:
	node* head, *tail;
	linkedlist() {
		head = tail = NULL;
	}
};

linkedlist BSTtoLL(node* root) {
	linkedlist l;
	// base case
	if (root == NULL) {
		return l;
	}

	// recursive case
	if (root->left == NULL and root->right == NULL) {
		l.head = l.tail = root;
	}
	else if (root->left == NULL and root->right != NULL) {
		linkedlist right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
	}
	else if (root->left != NULL and root->right == NULL) {
		linkedlist left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
	}
	else {
		linkedlist left = BSTtoLL(root->left);
		linkedlist right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
	}
	return l;
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";

		head = head->right;
	}
	cout << endl;
}

int main() {

	node* root = NULL;
	root = createBST();

	levelOrder(root);
	if (isBST(root)) {
		cout << "BST" << endl;
	}
	else {
		cout << "Not a BST" << endl;
	}
	inOrder(root);
	cout << endl;
	linkedlist ans = BSTtoLL(root);
	printLL(ans.head);

	return 0;
}
















