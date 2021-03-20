#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n; //5
	int counter=0;
	while(n!=0){
		counter+=n/5; //5/5=1
		n=n/5; //5/5=1

	}
	cout<<counter<<endl;


	return 0;
}