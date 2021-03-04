#include<iostream>
using namespace std;
int main(){
	int n,arr[100][100];
	cin>>n;
	// since no of rows = no of cols
	int rows=n,cols=n;
	// input the 2D array of which i need the transpose
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];

		}
		
	}
	// Before transpose 
	cout<<"Before transpose"<<endl;

	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}
	cout<<endl;

	// transpose 
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			if(i<j){
				swap(arr[i][j],arr[j][i]);

			}
			

		}
		
	}

	// Result transpose matrix
	cout<<"after transpose"<<endl;

	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}
	cout<<endl;




	return 0;
}
