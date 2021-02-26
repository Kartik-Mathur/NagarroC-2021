#include<iostream> 
using namespace std; 

void querytype1(int* toRotate, int times, int n) 
{ 

	// cout<<(*toRotate)<<endl; //0
	// Decreasing the absolute rotation 
	(*toRotate) = ((*toRotate) - times) % n; 
	// cout<<(*toRotate)<<endl; //-3
} 

void querytype2(int* toRotate, int times, int n) 
{ 
 
	// cout<<(*toRotate)<<endl;
	(*toRotate) = ((*toRotate) + times) % n; 
	// cout<<(*toRotate)<<endl;
} 

void querytype3(int toRotate, int l, int r, 
					int preSum[], int n) 
{ 
	// Finding absolute l and r. 
	l = (l + toRotate + n) % n;  //2
	r = (r + toRotate + n) % n;  //4

	// if l is before r. 
	cout<<l<<" "<<r<<endl;
	if (l <= r) 
		cout << (preSum[r + 1] - preSum[l]) << endl;	 

	// If r is before l. 
	else
		cout << (preSum[n] + preSum[r + 1] - preSum[l]) 
			<< endl;	 
} 

// Wrapper Function solve all queries. 
void wrapper(int a[], int n) 
{ 
	int preSum[n + 1]; 
	preSum[0] = 0; 

	// Finding Prefix sum 
	for (int i = 1; i <= n; i++) 
		preSum[i] = preSum[i - 1] + a[i - 1]; 

	int toRotate = 0; 

	// Solving each query 
	querytype1(&toRotate, 3, n); 
	querytype3(toRotate, 0, 2, preSum, n); 
	querytype2(&toRotate, 1, n); 
	querytype3(toRotate, 1, 4, preSum, n); 
} 

// Driver Program 
int main() 
{ 
	int a[100]; //1 2 3 4 5
	int n;
	cin>>n; //5
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>a[i];
	 	/* code */
	 } 
	wrapper(a, n); 
	return 0; 
} 