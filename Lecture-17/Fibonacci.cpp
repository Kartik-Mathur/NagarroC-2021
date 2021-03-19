// Fibonacci.cpp
#include <iostream>
using namespace std;

int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n; // if n is 0, 0 will return, else if n == 1, 1 will return
	}
	// Recursive case (Pure Assumption), don't know how it will be solved
	// fibo(n) = fibo(n-1)+fibo(n-2);
	// int smallerProb1 = fibo(n - 1);
	// int smallerProb2 = fibo(n - 2);

	// // Solve
	// int biggerProblem = smallerProb1 + smallerProb2;
	// return biggerProblem;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n; cin >> n;

	cout << fibo(n) << endl;

	return 0;
}
















