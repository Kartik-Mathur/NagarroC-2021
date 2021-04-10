/*

Given a matrix. [represented by its dimension]
Count number of ways to reach bottom right from top left. 
We can move to (i+1, j) and (i, j+1) from a cell (i, j).

*/

#include<iostream>

using namespace std;

int countPathsTL2BR(int i, int j, int n, int m) {

	if(i==n-1 && j==m-1) {
		// I have found a path from the TL->BR
		return 1;
	}

	if(i==n or j==m) {
		// I have gone out of bounds
		return 0;
	}

	// I am standing at the (i, j)th cell of the matrix and I have to make a decision

	// Go right
	int X = countPathsTL2BR(i, j+1, n, m);

	// Go down
	int Y = countPathsTL2BR(i+1, j, n, m);

	return X + Y;

}

int countPathsBR2TL(int n, int m) {

	if(n==0 && m==0) {
		// I have found a path from the BR->TL
		return 1;
	}

	if(n<0 or m<0) {
		// I have gone out of bounds
		return 0;
	}

	// I am standing at the (m, n)th cell of the matrix and I have to make a decision

	// Go left
	int X = countPathsBR2TL(n, m-1); 

	// Go up
	int Y = countPathsBR2TL(n-1, m); 

	return X + Y;

}

int main() {

	int n; // number of rows in the matrix
	cin>>n;

	int m; // number of columns in the matrix
	cin>>m;

	// int count = countPathsTL2BR(0, 0, n, m);
	// cout<<count<<endl;

	int count = countPathsBR2TL(n-1, m-1);
	cout<<count<<endl;

	return 0;
}