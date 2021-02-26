#include <iostream>
#include<cmath>
using namespace std;


int main(){
int t;
cin>>t;
while(t){
    t--;
    long long int x;
    cin>>x;
    long long int n;
    cin>>n;
    if(x%n==0)
        cout << 0 << endl;
    else{
        long long int p=x/n;
        cout << min(x%n,((p+1)*(n) -x))<< endl;
    }
}
 
 
}