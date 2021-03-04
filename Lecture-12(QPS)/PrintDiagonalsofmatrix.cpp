#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int rows,cols;
	cout<<"enter no of rows and cols"<<endl;
	cin>>rows>>cols;

	
	// input the 2D array
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];

		}
		
	}

	cout<<"Principal diagonal is"<<endl;
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			if(i==j){
				cout<<arr[i][j]<<", ";
			}

		}
		
	}
	cout<<endl;
	cout<<"Secondary diagonal is"<<endl;
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			if(i+j==rows-1){
				cout<<arr[i][j]<<", ";
			}

		}
		
	}
	cout<<endl;


	




	return 0;
}
