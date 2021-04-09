/*

Given a string find the length of the longest substring without repeating characters. 
*/

#include<iostream>

using namespace std;

bool hasUniqueCharacters(string &s, int i, int j) {
	int visited[256]; // represents a map
	for(int i=0; i<256; i++){
		visited[i]=0;
	}

	// s[i....j] does it contain only unique char or not

	for(int k=i; k<=j; k++){
		// check if the kth character of the substr[i...j] has prev. occurred or not
		if(visited[s[k]]) {
			return false;
		}
		visited[s[k]]=1;
	}
	return true;
}

int main(){


	// read the input
	string str;
	cin>>str;

	// // Approach 1 -> N^3 steps

	// int n=str.length(); // str.size()
	// int max_len=0; // keeps track of the maximum length substring of non-repeating char.

	// int left=0;
	// int right=0;

	// // i iterates over all the starting points of the substring
	// for(int i=0; i<n; i++){
	// 	// j iterates over all the ending points of the substring
	// 	for(int j=i; j<n; j++){
	// 		// str[i....j]
	// 		if(hasUniqueCharacters(str, i, j)){
	// 			int length = j-i+1; // calculate the length of the substring 
	// 			if(length>max_len){
	// 				max_len=length;
	// 				left=i;
	// 				right=j;
	// 			}
	// 			// max_len = max(max_len, length);
	// 		}
	// 	}
	// }

	// cout<<max_len<<endl;
	// for(int k=left; k<=right; k++){
	// 	cout<<str[k]<<"";
	// }
	// cout<<endl;

	// // Approach 2 -> N^2 steps

	// int n=str.length(); // str.size()
	// int max_len=0; // keeps track of the maximum length substring of non-repeating char.

	// int left=0;
	// int right=0;

	// // i iterates over all the starting points of the substring
	// for(int i=0; i<n; i++){
	// 	int visited[256];
	// 	for(int k=0; k<256; k++){
	// 		visited[k]=0;
	// 	}

	// 	// j iterates over all the ending points of the substring
	// 	for(int j=i; j<n; j++){
	// 		// str[i....j]
	// 		if(visited[str[j]]) {
	// 			// slide & reset
	// 			break;
	// 		} else {
	// 			// expand the window
	// 			int length = j-i+1; // calculate the length of the substring 
	// 			if(length>max_len){
	// 				max_len=length;
	// 				left=i;
	// 				right=j;
	// 			}
	// 			visited[str[j]]=1;
	// 		}
	// 	}
	// }

	// cout<<max_len<<endl;
	// for(int k=left; k<=right; k++){
	// 	cout<<str[k]<<"";
	// }
	// cout<<endl;

	// Approach 3 -> N steps

	int visited[256];
	for(int i=0; i<256; i++){
		visited[i]=-1;
	}

	visited[str[0]]=0;
	int cur_len=1;
	int max_len=1;

	int n=str.size(); // str.length()

	for(int i=1; i<n; i++) {
		int last_occurrence=visited[str[i]];
		if(last_occurrence==-1 || last_occurrence<i-cur_len) {
			// expand the window
			cur_len++;
		} else {
			// shrink the window
			cur_len=i-last_occurrence;
		}
		visited[str[i]]=i;
		max_len = max(max_len, cur_len);
	}

	cout<<max_len<<endl;

	return 0;
}