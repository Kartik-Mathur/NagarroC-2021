// Doubts - Union.cpp
#include <iostream>
using namespace std;
#define F(a,n) for(int i = 0 ; i < n ; i++){cin>>a[i];}
// 5
// 1 4 8 10 11
// 5
// 2 4 6 8 10
int main() {
	int a[1005], b[1005];
	int n, m;
	cin >> n;
	F(a, n);

	cin >> m;
	F(b, m);
	// Finding union
	int ans[2010];
	for (int i = 0 ; i < n ; i++) {
		ans[i] = a[i];
	}

	for (int i = n ; i < n + m ; i++) {
		ans[i] = b[i - n];
	}

	sort(ans, ans + n + m);

	for (int i = 0 ; i < n + m ; i++) {
		if (i > 0) {
			if (ans[i] != ans[i - 1]) {
				cout << ans[i] << " ";
			}
		}
		else {
			cout << ans[i] << " ";
		}
	}
	cout << endl;
	// Finding Intersection
	int i = 0, j = 0;
	while (i < n and j < m) {
		if (a[i] == b[j]) {
			cout << a[i] << " ";
			i++; j++;
		}
		else {
			if (a[i] < b[j]) {
				i++;
			}
			else {
				j++;
			}
		}
	}
	cout << endl;

	return 0;
}
















