#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int price[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>price[i];
			/* code */
		}
		int money;
		cin>>money;

		sort(price,price+n);
		int price1=0;
		int price2=0;
		int min=INT_MAX;

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(price[i]+price[j]==money){
					int diff=price[j]-price[i];//8-2=6 //6-4=2
					if(diff<min){ //2<6
						min=diff; //2
						price1=price[i]; //4
						price2=price[j]; //6
					}

				}
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<price1<<" and "<<price2<<"."<<endl;

		// cout<<"Deepak should buy roses whose prices are "<<min(price1,price2)<<" and "<<max(price2,price1)<<"."<<endl;


	}



	return 0;
}