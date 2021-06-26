#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(10);
	s.insert(2);
	s.insert(1);
	s.insert(5);

	// while (!s.empty()) {
	// 	cout << *(s.begin()) << " ";
	// 	s.erase(s.begin());
	// }

	for (auto node : s) {
		cout << node << endl;
	}

	for (auto it = s.begin() ; it != s.end() ; it++) {
		cout << *it << " ";
	}
	cout << endl;

	auto ans = s.find(10);
	if (ans == s.end()) {
		cout << "Value is not present " << endl;
	}
	else {
		cout << *ans << endl;
	}
	return 0;
}
















