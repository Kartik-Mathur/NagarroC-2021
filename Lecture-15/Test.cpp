#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	string a[1000];

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	sort(a, a + n);



	return 0;
}
















