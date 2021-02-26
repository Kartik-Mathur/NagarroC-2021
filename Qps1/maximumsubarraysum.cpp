#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int cs=0,ms=INT_MIN,n,arr[100005],i;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>arr[i];
			cs=cs+arr[i];
			if(cs<0){
				cs=0;
			}
			ms=max(ms,cs);

		}
		cout<<ms<<endl;



	}


	return 0;
}