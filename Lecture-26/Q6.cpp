/*

Given an input string and a substring. 
Find the frequency of occurrences of a substring in a given string.

*/


#include<iostream>

using namespace std;

int main(){


	string txt;
	cin>>txt;

	string pat;
	cin>>pat;

	int N=txt.length(); // txt.size()
	int M=pat.length(); // pat.size()

	int freq=0; // keep track of frequence of substrings in txt that match the pattern

	for(int i=0; i<=N-M; i++) {
		int j;
		for(j=0; j<M; j++){
			if(txt[i+j]!=pat[j]) {
				// jth char of the the sub-str starting at index i did not match with the jth char. of the pat. 
				break;
			}
		}
		if(j==M){
			// pattern found
			freq++;
		}
	}

	cout<<freq<<endl;

	return 0;
}