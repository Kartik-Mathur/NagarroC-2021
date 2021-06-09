#include <iostream>
using namespace std;
// 10 2 6 -1 -1 -1 5 8 -1 -1 7 9 -1 -1 -1
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

int countNodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	return countNodes(root->left) + countNodes(root->right) + 1; // Post Order: Left right root
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}

	return max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// Recursive Case
	// 1. Dia via root node-> height(root->left) + height(root->right)
	int op1 = height(root->left) + height(root->right);
	// 2. Dia in Left Sub Tree
	int op2 = diameter(root->left);
	// 3. Dia in Right Sub Tree
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	Pair p;
	// Base case
	if (root == NULL) {
		p.diameter = p.height = 0;
		return p;
	}

	// Recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	// Find the height of the tree
	p.height = max(left.height, right.height) + 1;

	// Find the diameter of the tree
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2, op3));

	return p;
}

int main() {

	node* root = NULL;
	root = createTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	cout << "Number of nodes " << countNodes(root) << endl;
	cout << "Height " << height(root) << endl;
	cout << "Diameter " << diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Fast Height " << ans.height << endl;
	cout << "Fast Diameter " << ans.diameter << endl;

	return 0;
}
















