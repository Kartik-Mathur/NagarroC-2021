#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// int arr[n];
		int *arr=new int[n];//dma datatype *name=new datatype[size]

		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			/* code */
		}

		int max_diff=INT_MIN;
		int min_element=arr[0];
		for (int i = 1; i <n; ++i)
		{
			if(arr[i]-min_element>max_diff){
				max_diff=arr[i]-min_element;
			}
			if(arr[i]<min_element){
				min_element=arr[i];
			}

		}
		cout<<max_diff<<endl;
		delete[]arr;
	}



	return 0;
}