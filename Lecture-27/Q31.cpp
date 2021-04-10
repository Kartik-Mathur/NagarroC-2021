/*

Given an array of integers, print sums of all subsets in it. 
Output sums can be printed in any order.

*/

#include<iostream>
#include<set>

using namespace std;

void generateSubsetSum(int* inp, int n, int i, int sum, multiset<int> &s) {

	// Have I reached the end of the input array
	if(i==n){
		cout<<"{";
		for(auto it=s.begin(); it!=s.end(); it++){
			cout<<*it<<" ";
		}
		cout<<"} = "<<sum<<endl;
		return;
	}

	// I am standing at the ith elment of the input array and I have to make a decision

	// Add inp[i] to the subset sum
	s.insert(inp[i]);
	generateSubsetSum(inp, n, i+1, sum+inp[i], s);

	// Do not add inp[i] to the subset sum
	// s.erase(inp[i]);  // for set
	s.erase(s.lower_bound(inp[i])); // for multi-set
	generateSubsetSum(inp, n, i+1, sum, s);

	return;
}

int main() {

	int n;
	cin>>n;

	int* inp = new int[n];
	for(int i=0; i<n; i++){
		cin>>inp[i];
	}

	// set<int> s;
	multiset<int> s;

	generateSubsetSum(inp, n, 0, 0, s);

	return 0;
}