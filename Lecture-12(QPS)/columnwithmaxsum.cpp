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

	// j-->cur col
	// i-->cur row
	int maxsum=INT_MIN,rescolumn;
	for (int j = 0; j < cols; ++j)
	{
		int sum=0;
		for (int i = 0; i < rows; ++i)
		{
			sum=sum+arr[i][j];
			
		}
		if(sum>=maxsum){
			rescolumn=j;

			maxsum=sum;

		}
		// maxsum=max(sum,maxsum);
		
	}
	
	cout<<"maximum sum is "<<maxsum<<endl;
	cout<<" result column is "<<rescolumn<<endl;




	return 0;
}
