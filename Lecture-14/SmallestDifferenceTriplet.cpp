// SmallestDifferenceTriplet.cpp
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define F(a,n) for(int i = 0 ; i < n ; i++){cin>>a[i];}

int max3(int a, int b, int c) {
	return max(a, max(b, c));
}

int min3(int a, int b, int c) {
	return min(a, min(b, c));
}

int main() {
	int a[101], b[101], c[101];
	int n;
	cin >> n;
	F(a, n);
	F(b, n);
	F(c, n);

	sort(a, a + n);
	sort(b, b + n);
	sort(c, c + n);

	int diff = INT_MAX;
	int i = 0 , j = 0 , k = 0;
	int v1, v2, v3;
	while (i < n and j < n and k < n) {
		int max = max3(a[i], b[j], c[k]);
		int min = min3(a[i], b[j], c[k]);
		int sum = a[i] + b[j] + c[k];

		if (diff > (max - min)) {
			// v1 = a[i];
			// v2 = b[j];
			// v3 = c[k];
			v1 = max;
			v2 = sum - (max + min);
			v3 = min;
			diff = max - min;
		}

		if (min == a[i]) {
			i++;
		}
		else if (min == b[j]) {
			j++;
		}
		else {
			k++;
		}
	}

	// int ans[] = {v1, v2, v3};
	// sort(ans, ans + 3);

	// cout << ans[2] << " " << ans[1] << " " << ans[0] << endl;
	cout << v1 << " " << v2 << " " << v3 << endl;

	return 0;
}
















