// MinSwapsToSort.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[] = {8, 4, 5, 2, 3, 1};
	int n = sizeof(a) / sizeof(int);

	pair<int, int> p[1000];

	for (int i = 0 ; i < n ; i++) {
		p[i].first = a[i];
		p[i].second = i;
	}
	for (int i = 0 ; i < n ; i++) {
		cout << "(" << p[i].first << "," << p[i].second << ") ";
	}
	cout << endl;
	sort(p, p + n);
	for (int i = 0 ; i < n ; i++) {
		cout << "(" << p[i].first << "," << p[i].second << ") ";
	}
	cout << endl;
	bool wereYouHere[1000] = {0};
	int ans = 0;

	for (int i = 0 ; i < n ; i++) {
		if (wereYouHere[i] == true || p[i].second == i) { // if the element was at its correct position by default you should not do anything in that case
			continue;
		}

		int noe = 0;
		int indx = i;
		while (wereYouHere[indx] == false) {
			noe++;
			wereYouHere[indx] = true;
			indx = p[indx].second;
		}
		if (noe > 1) { // when noe is 2 atleaast, then only we should do the addition,
			// if noe is 1 then noe-1 == 0, so I can skip that part
			ans += noe - 1;
		}
	}

	cout << ans << endl;

	return 0;
}
















