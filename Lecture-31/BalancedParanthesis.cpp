// BalancedParenthesis.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char* a) {
	stack<char> s;
	// NULL == 0 == false
	for (int i = 0 ; a[i] ; i++) {
		char ch = a[i];
		switch (ch) {
		case '(':
		case '{':
		case '[':
			s.push(ch);
			break;
		case ')':
			if (s.empty() == true or s.top() != '(') {
				return false;
			}
			s.pop();
			break;
		case '}':
			if (s.empty() == true or s.top() != '{') {
				return false;
			}
			s.pop();
			break;
		case ']':
			if (s.empty() == true or s.top() != '[') {
				return false;
			}
			s.pop();
			break;
		}
	}

	if (s.empty() == true) {
		return true;
	}
	else {
		return false;
	}
}

int main() {


	char a[] = "{{a+b*(c+d)+[e+f]*x}}";

	if (isBalanced(a)) {
		cout << "Balanced Parenthesis" << endl;
	}
	else {
		cout << "Not a Balanced Parenthesis" << endl;
	}

	return 0;
}
















