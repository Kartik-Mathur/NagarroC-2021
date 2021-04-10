/*

Given a string you need to print all possible subsets of the string. 

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

void generateSubsets(char* inp, char* out, int i, int j, set<string> &v) {

	// Have I reached the end of the input array
	if(inp[i]=='\0') {
		// terminate and print the output array
		out[j]='\0';
		// v.push_back(out) // for vector
		v.insert(out); // for set
		// cout<<out<<endl;
		return;
	}

	// I am standing at the ith character of the input array and I have to make a decision


	// Add the ith character to the subset [out]
	out[j]=inp[i];
	generateSubsets(inp, out, i+1, j+1, v);


	// Donot add the ith character to the subset [out]
	generateSubsets(inp, out, i+1, j, v);


	return;
}

int main() {

	char inp[10];
	cin>>inp;

	char out[10];

	// cout<<endl;

	// vector<string> v;

	set<string> s;

	generateSubsets(inp, out, 0, 0, s);

	// sort(v.begin(), v.end());

	// for(string str:v){
	// 	cout<<str<<endl;
	// }

	// for(int i=0; i<v.size(); i++){
	// 	cout<<v[i]<<endl;
	// }

	// for(auto it=v.begin(); it<v.end(); i++){
	// 	cout<<*it<<endl;
	// }

	// cout<<v.size()<<endl;

	for(string str:s){
		cout<<str<<endl;
	}
	
	return 0;
}