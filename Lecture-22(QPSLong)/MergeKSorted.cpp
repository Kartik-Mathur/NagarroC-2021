// MergeKSorted.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<vector<int> > v{{1, 4, 8}, {3, 7, 9}, {2, 5, 6}};

	vector<int> out(9);

	for (int i = 0 ; i < v.size() ; i++) {
		for (int j = 0 ; j < v[i].size() ; j++) {
			out[i] = v[i][j];
		}
	}
	sort(out.begin(), out.end());
	for (int i = 0 ; i < 9 ; i++) {
		cout << out[i] << " ";
	}
	cout << endl;

	return 0;
}
















