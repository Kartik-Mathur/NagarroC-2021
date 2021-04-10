/*

Given an array of integers, print sums of all subsets in it. 
Output sums can be printed in any order.

Iterative Approach

*/

#include<iostream>
#include<set>

using namespace std;

int main() {

	int n;
	cin>>n;

	int* inp = new int[n];
	for(int i=0; i<n; i++){
		cin>>inp[i];
	}

	// generate numbers from 0 to 2^N-1
	for(int i=0; i<(1<<n); i++) {
		int sum=0;
		multiset<int> s; // to handle repeating elements
		// iterate over bits of binary representation of i
		for(int j=0; j<n; j++){
			if(i & (1<<j)) {
				sum += inp[j];
				s.insert(inp[j]); // to keep track of the current subset
			}
		}
		cout<<"{";
		for(auto it=s.begin(); it!=s.end(); it++){
			cout<<*it<<" ";
		}
		cout<<"} = "<<sum<<endl;
	}

	return 0;
}