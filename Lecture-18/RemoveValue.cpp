//https://leetcode.com/problems/remove-element/
#include <iostream>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int j = 0;
	for (int i = 0 ; i < nums.size() ; i++) {
		if (nums[i] != val) {
			nums[j++] = nums[i];
		}
	}

	return j;
}

int main() {



	return 0;
}
















