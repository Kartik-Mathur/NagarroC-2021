/*

Check if binary representation of a number is palindrome.

*/


#include<iostream>

using namespace std;

bool isKthBitSet(unsigned int x, unsigned int k){
	return x & (1<<k);
}

bool isPalindrome(unsigned int x){

	unsigned int left = sizeof(unsigned int) * 8 - 1; 
	unsigned int right= 0;

	while(left>right) {
		if(isKthBitSet(x, left) != isKthBitSet(x, right)) {
			return false;
		}
		left--;
		right++;
	}

	return true;

}

int main(){

	unsigned int x = 1<<31; // 2^31 1000....0
	unsigned int y = 1<<30; // 2^30 01000..00

	cout<<isPalindrome(x)<<endl; // 0
	cout<<isPalindrome(y)<<endl; // 0

	x += 1; // 2^31 + 1 1000....1
	y += 2; // 2^30 + 1 0100...10

	cout<<isPalindrome(x)<<endl; // 0
	cout<<isPalindrome(y)<<endl; // 0

	return 0;
}