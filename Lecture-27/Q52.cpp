/*

Given a matrix where every cell has some number of coins. 
Count number of ways to reach bottom right from top left with exactly k coins. 
We can move to (i+1, j) and (i, j+1) from a cell (i, j).

*/

#include<iostream>

using namespace std;

int countPathsBR2TL(int** matrix, int n, int m, int k) {

	if(n==0 && m==0) {
		// I have reached the TL cell
		
		// if(k==matrix[n][m]) {
		// 	// I have found a path of requiste sum k
		// 	return 1;
		// }  else {
		// 	return 0;
		// }

		return k==matrix[n][m];

	}

	if(n<0 or m<0) {
		// I have gone out of bounds
		return 0;
	}

	// I am standing at the (m, n)th cell of the matrix and I have to make a decision

	// Go left // n, m => n, m-1
	int X = countPathsBR2TL(matrix, n, m-1, k-matrix[n][m]); 

	// Go up // n, m => n-1, m
	int Y = countPathsBR2TL(matrix, n-1, m, k-matrix[n][m]); 

	return X + Y;

}

int main() {

	int n; // number of rows in the matrix
	cin>>n;

	int m; // number of columns in the matrix
	cin>>m;

	// declare a matrix
	int** matrix = new int*[n];
	for(int i=0; i<n; i++){
		matrix[i]= new int[m];
	}

	// read matrix
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>matrix[i][j];
		}
	}

	// read k
	int k;
	cin>>k;

	// int count = countPathsBR2TL(matrix, n-1, m-1, k);
	// cout<<count<<endl;

	cout<<countPathsBR2TL(matrix, n-1, m-1, k)<<endl;

	return 0;
}