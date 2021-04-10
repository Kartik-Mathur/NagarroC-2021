/*

Given number of digits n in a number, 

print all n-digit numbers whose digits are strictly increasing from left to right.

*/

#include<iostream>

using namespace std;

void nDigitNumberGenerator(int n, char* out, int j, int X) {

	if(n==0) {
		// terminate & print the output
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	// I am standing at the jth index of the output array, and I have to make a decision

	// Which digit should go into out[j]?
	for(int i=X; i<=9; i++) {

		// '9' - '0' = 9
		// '9' = 9 + '0'
		// 'i' = i + '0'

		out[j]=i+'0'; // out->char array, at each index I store a char, but i is a int
		nDigitNumberGenerator(n-1, out, j+1, i+1);
	}

}

int main() {

	int n;
	cin>>n;

	char out[n+1];

	nDigitNumberGenerator(n, out, 0, 0);

	return 0;
}