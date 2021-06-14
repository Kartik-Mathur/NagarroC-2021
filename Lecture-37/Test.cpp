#include <iostream>
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

node* lca(node* root, int a, int b) {
	// base case
	if (!root) {
		return NULL;
	}

	// recursive case
	if (root->data == a || root->data == b) {
		return root;
	}

	node* left = lca(root->left, a, b);
	node* right = lca(root->right, a, b);

	if (left != NULL and right != NULL) {
		return root;
	}

	if (right == NULL) {
		return left;
	}
	return right;
}

void printRightView(node* root, int level, int &max_level) {
	// base case
	if (!root) {
		return;
	}

	// recursive case
	if (level > max_level) {
		cout << root->data << " ";
		max_level = level;
	}

	printRightView(root->right, level + 1, max_level);
	printRightView(root->left, level + 1, max_level);
}


int main() {

	node* root = NULL;

	root = createTree();

	node* ans = lca(root, 8, 9);
	if (ans) {// NULL == 0, 0 == false
		cout << ans->data << endl;
	}
	else {
		cout << "LCA is not present" << endl;
	}

	int max_level = -1;
	printRightView(root, 0, max_level);



	return 0;
}
















