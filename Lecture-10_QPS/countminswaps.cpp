#include<iostream>
using namespace std;
 int countminswaps(string s){
 	int count=0;
 	int n=s.length();
 	for(int i=0;i<n/2;i++){
 		int left=i;
 		int right=n-left-1;
 		while(left<right){
 			if(s[left]==s[right]){
 				break;
 			}
 			else{
 				right--;
 			}

 		}
 		if(left==right){
 			return -1;
 		}
 		for(int j=right;j<n-left-1;j++){
 			swap(s[j],s[j+1]);
 			count++;

 		}


 	}

 	return count;

 }

int main(){

	string s;
	cin>>s;
	int ans1=countminswaps(s);
	reverse(s.begin(),s.end());
	int ans2=countminswaps(s);
	cout<<max(ans1,ans2)<<endl;






	return 0;
}