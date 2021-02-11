// PrintReverse.cpp
#include <iostream>
using namespace std;

int main() {

	int a[10000];
	int n;

	cout << "Enter n(max:10000)";
	cin >> n;
	// Dont do this
	// int arr[n]; -> Nahi krna
	cout << "Enter value of " << n << " Buckets" << endl;
	for (int i = 0 ; i < n ; i++) {
		// cin >> a[i];
		a[i] = i + 1;
	}

	for (int i = 0 ; i < 100 ; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = n - 1; i >= 0 ; i--) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}





