#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int r,c;
	cin>>r>>c;
	
	// input the 2D array 
	for (int i = 0; i <r; ++i)
	{
		for(int j=0;j<c;j++){
			cin>>arr[i][j];

		}
		
	}


	cout<<"Before operation"<<endl;

	for (int i = 0; i <r; ++i)
	{
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}
	cout<<endl;

	bool rows[100];
	bool cols[100];
	for (int i = 0; i < r; ++i)
	{
		rows[i]=0;
		/* code */
	}
	for (int i = 0; i < c; ++i)
	{
		cols[i]=0;
		/* code */
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]==1){
				rows[i]=1;
				cols[j]=1;

			}
		}
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(rows[i]==1||cols[j]==1){
				arr[i][j]=1;

			}
		}
	}


	
	cout<<"after operation"<<endl;

	for (int i = 0; i <r; ++i)
	{
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}
	cout<<endl;


	




	return 0;
}
