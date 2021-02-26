#include<iostream>
using namespace std;
int main(){

	int fn=INT_MIN;
	int sn=INT_MIN;
	int tn=INT_MIN;
	int a[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]>fn){
			tn=sn;
			sn=fn;
			fn=a[i];
		}
		else if(a[i]>sn){
			tn=sn;
			sn=a[i];
		}
		else if(a[i]>tn){
			tn=a[i];
		}
		/* code */
	}

	cout<<fn<<" "<<sn<<" "<<tn<<endl;



	return 0;
}