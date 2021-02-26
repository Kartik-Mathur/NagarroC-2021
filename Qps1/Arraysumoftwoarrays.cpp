#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int one[1005];
	for (int i = 0; i < n; ++i)
	{
		cin>>one[i];
		/* code */
	}
	int m,two[1005];
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>two[i];
		/* code */
	}
	int carry=0;
	int i=n-1;
	int j=m-1;
	int third[10000];

	int k=0;
	while(i>=0||j>=0||carry!=0){
		int sum=carry;

		if(i>=0){
			sum=sum+one[i];
		}
		if(j>=0){
			sum=sum+two[j];
		}
		int rem=sum%10;
		third[k]=rem;
		k++;
		carry=sum/10;
		i--;
		j--;
	}

	// if(carry!=0){
		while(){
			third[k]=carry%10;
			k++;
			carry=carry/10;

		}
	// }

	for(int l=k-1;l>=0;l--){
		cout<<third[l]<<", ";

	}

	cout<<"END"<<endl;




	return 0;
}