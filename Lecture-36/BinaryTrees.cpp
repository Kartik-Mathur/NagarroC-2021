#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
// 10 2 6 -1 -1 -1 5 8 -1 -1 7 9 -1 -1 -1
// 10 2 6 -1 -1 -1 5 -1 7 9 -1 -1 -1
// NODE /////////////////
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
// NODE /////////////////

node* createTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	// Create root node
	node* root = new node(data);
	// Create Left Subtree
	root->left = createTree();
	// Create Right Subtree
	root->right = createTree();

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

int height(node* root) {
	if (!root) { // root != NULL or !root, NULL == 0, !NULL == !0, !0 == 1, !false == true
		return 0;
	}

	return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(node* root) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	if (abs(height(root->left) - height(root->right)) <= 1 and isBalanced(root->left) and isBalanced(root->right)) {
		return true;
	}
	else {
		return false;
	}
}

class Pair {
public:
	int height;
	bool balanced;
};

Pair BalancedFast(node* root) {
	Pair p;
	if (!root) { // root != NULL or !root, NULL == 0, !NULL == !0, !0 == 1, !false == true
		p.height = 0;
		p.balanced = true;
		return p;
	}
	// left right root
	Pair left = BalancedFast(root->left);
	Pair right = BalancedFast(root->right);

	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.balanced and right.balanced) {
		p.balanced = true;
		// p.height = max(left.height, right.height) + 1;
		// return p;
	}
	else {
		p.balanced = false;
		// p.height = max(left.height, right.height) + 1;
		// return p;
	}
	return p;
}

node* makeTree(int *a, int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}
	// if (s == e) {
	// 	return new node(a[s]);
	// }

	// recursive case
	int mid = (s + e) / 2;
	node* root = new node(a[mid]);

	root->left = makeTree(a, s, mid - 1);
	root->right = makeTree(a, mid + 1, e);

	return root;
}

int in[] = {1, 4, 18, 10, 3, 8, 6};
int pre[] = {10, 4, 1, 18, 8, 3, 6};
int indx = 0;

node* buildTree(int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}

	// Recursive cae
	// Take the first element from pre[] and make it root node
	int ele = pre[indx];
	node* root = new node(ele);
	indx++;
	int k = -1;
	for (int i = s ; i <= e ; i++) {
		if (in[i] == ele) {
			k = i;
			break;
		}
	}

	root->left = buildTree(s, k - 1);
	root->right = buildTree(k + 1, e);

	return root;
}

node* levelorderBuildTree() {
	node* root = NULL;

	int data;

	cout << "Enter data for root node " << endl;
	cin >> data;

	queue<node*> q;
	if (data == -1) {
		return root; // root == NULL
	}

	root = new node(data);
	q.push(root);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		cout << "Enter left and right child of " << x->data << endl;

		int l, r;
		cin >> l >> r;

		if (l != -1) {
			x->left = new node(l);
			q.push(x->left);
		}

		if (r != -1) {
			x->right = new node(r);
			q.push(x->right);
		}
	}

	return root;
}

int main() {

	int a[] = {1, 4, 18, 10 , 3 , 8 , 6};
	int n = sizeof(a) / sizeof(int);
	node* root = NULL;
	// root = createTree();
	// root = makeTree(a, 0, n - 1);
	// root = buildTree(0, 6);
	root = levelorderBuildTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "Level Order" << endl;
	levelOrder(root);

	if (isBalanced(root)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}

	Pair ans = BalancedFast(root);
	cout << "Fast height " << ans.height << endl;
	if (isBalanced(root)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}
	return 0;
}
















