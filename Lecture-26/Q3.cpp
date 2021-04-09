/*

You are given a string and a word your task is that count the number of the occurrence 
of the given word in the string and print the number of occurrence of the word.

*/

#include<iostream>

using namespace std;

int main(){

	string str;
	getline(cin, str);

	string word;
	cin>>word;

	int cnt=0;

	char* p = strtok((char *)str.c_str(), " ");
	while(p!=NULL){

		string token(p); // converting char array into a stiring
		if(token==word){
			// I have found a word in the string
			cnt++;
		}
		p = strtok(NULL, " "); // to get the next token in the string
	}

	cout<<cnt<<endl;

	return 0;
}