#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	int maxprofit=0;
	int minprice=INT_MAX;

	for(int i=0;i<n;i++){
		if(arr[i]<minprice){
			minprice=arr[i];
		}
		else if(arr[i]-minprice>maxprofit){
			maxprofit=arr[i]-minprice;
		}
	}
	cout<<maxprofit<<endl;



	return 0;
}