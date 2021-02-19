// CountTriangles.cpp
#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n); // Just learn it, this is how to apply sort

	int cnt = 0;
	for (int a = 0 ; a < n - 2 ; a++) {
		int c = a + 2;
		for (int b = a + 1 ; b < n - 1; b++) {
			while (c < n and (arr[a] + arr[b] > arr[c])) {
				c++;
			}

			cnt += (c - b - 1);
		}
	}
	cout << "No of Traingles: " << cnt << endl;
	return 0;
}