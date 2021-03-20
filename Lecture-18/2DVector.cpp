// 2DVector.cpp
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

void print(vector<vector<int> > &v, int r, int c) {
	for (int row = 0 ; row < r ; row++) {
		for (int col = 0 ; col < c; col++) {
			cout << v[row][col] << " ";
		}
		cout << endl;
	}
}

int main() {
	// 1. Initialization
	// vector<vector<int> > v{
	// 	{1, 2, 3}, // this is a vector works in c++17
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };

	// 2. Creating a 2D vector
	// vector<vector<int> > v(5); // r can have max value 5
	// int r, c;
	// cin >> r >> c;
	// int number = 1;
	// for (int i = 0 ; i < r ; i++) {
	// 	for (int j = 0 ; j < c ; j++) {
	// 		v[i].pb(number++);
	// 	}
	// }


	// for (int row = 0 ; row < r ; row++) {
	// 	for (int col = 0 ; col < v[row].size(); col++) {
	// 		cout << v[row][col] << " ";
	// 	}
	// 	cout << endl;
	// }


	// 3. Creating a vector

	int r, c;
	cin >> r >> c;
	// vector<vector<int> > v(r, vector<int> (c));
	vector<vector<int> > v(r, vector<int> (c, 0)); // Initialize every column with value

	// int number = 1;
	// for (int i = 0 ; i < r ; i++) {
	// 	for (int j = 0 ; j < c ; j++) {
	// 		v[i][j] = number++;
	// 	}
	// }


	print(v, r, c);


	return 0;
}
















