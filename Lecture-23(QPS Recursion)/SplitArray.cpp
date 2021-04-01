// SplitArray.cpp
#include <iostream>
using namespace std;

int arr[1000];
int n;

int out[100][100];
int k = 0;
int cnt = 0;
int SumArray(int *a, int n) {
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		ans += a[i];
	}
	return ans;
}

void split(int indx, int *a, int i, int *b, int j) {
	if (indx == n) {
		// check whether two arrays have the same sum or not
		if (SumArray(a, i) == SumArray(b, j)) {
			// cnt++;
			out[k][0] = i; // store the size of a
			for (int l = 1 ; l <= i ; l++) {
				out[k][l] = a[l - 1];
			}

			out[k + 1][0] = j;
			for (int l = 1 ; l <= j ; l++) {
				out[k + 1][l] = b[l - 1];
			}
			k += 2;
			return;
		}

		return;
	}

	// Recursive case
	a[i] = arr[indx];
	split(indx + 1, a, i + 1, b, j);

	b[j] = arr[indx];
	split(indx + 1, a, i, b, j + 1);
}

int main() {

	cin >> n;
	for (int i = 0 ; i < n ; i++) {cin >> arr[i];}
	sort(arr, arr + n);
	int a[100], b[100];


	split(0, a, 0, b, 0);
	cout << cnt << endl;

	for (int i = 0 ; i < k ; i += 2) {
		int n = out[i][0];
		for (int j = 1; j <= n ; j++) {
			cout << out[i][j] << " ";
		}
		cout << "and ";
		n = out[i + 1][0];
		for (int j = 1; j <= n ; j++) {
			cout << out[i + 1][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
















