// ReverseStack.cpp
#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int topElement) {
	// base case
	if (s.empty() == true) {
		s.push(topElement);
		return;
	}

	// recursive case
	int top = s.top();
	s.pop();
	pushAtBottom(s, topElement);
	s.push(top);
}

void ReverseStack(stack<int> &s) {
	if (s.empty())
	{
		return;
	}

	int topElement = s.top();
	s.pop();
	ReverseStack(s);
	pushAtBottom(s, topElement);
}

void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout << "Stack Before Reversal" << endl;


	printStack(s);
	ReverseStack(s);
	cout << "Stack After Reversal" << endl;
	printStack(s);
	// while(!s.empty()){
	// 	cout<<s.top()<<" ";
	// 	s.pop();
	// }
	// cout<<endl;

	return 0;
}
















