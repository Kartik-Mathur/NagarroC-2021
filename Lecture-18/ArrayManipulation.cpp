// ArrayManipulation.cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int> > queries) {
	vector<long> prefix(n + 2);
	// 1st way of doing it
	// vector<vector<int>> queries(m);
//    for (int i = 0; i < m; i++) {
//        queries[i].resize(3);
//        for (int j = 0; j < 3; j++) {
//            cin >> queries[i][j];
//        }
//    }
	// 2nd way of doing it
	// for (int i = 0 ; i < queries.size() ; i++) {
	// 	int a = queries[i][0];
	// 	int b = queries[i][1];
	// 	int k = queries[i][2];

	// 	prefix[a] += k;
	// 	prefix[b + 1] -= k;
	// }

	long ans = INT_MIN;
	for (int i = 1; i <= n ; i++) {
		prefix[i] += prefix[i - 1];
		ans = max(ans, prefix[i]);
	}
	return ans;
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int> > queries(m, vector<int>(3));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> queries[i][j];
		}
	}

	long result = arrayManipulation(n, queries);
	cout << result << endl;
	return 0;
}
