// MajorityElement.cpp
#include <iostream>
using namespace std;
int CandidateFreq(int *a, int n, int candidate) {
	int cnt = 0;
	for (int i = 0 ; i < n ; i++) {
		if (a[i] == candidate) {
			cnt++;
		}
	}

	return cnt;
}

int majority(int *a, int n) {
	int cnt = 0;
	int candidate;

	for (int i = 0 ; i < n ; i++) {
		if (cnt == 0) {
			candidate = a[i];
		}

		cnt += (candidate == a[i]) ? 1 : -1;
		// if(candidate == a[i]){
		// 	cnt++;
		// }
		// else{
		// 	cnt--;
		// }
	}

	int f = CandidateFreq(a, n, candidate);
	if (f > n / 2) {
		return candidate;
	}

	return -1;
}

int main() {
	int a[] = {1, 2, 3, 4 , 4 , 4 , 4};
	int n = sizeof(a) / sizeof(int);

	cout << majority(a, n) << endl;

	return 0;
}
















