#include <iostream>
using namespace std;

// void Print(int a[100],int n){
void Print(int a[], int n) {
	// cout << "Inside Function" << endl;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}

// Arrays are passed by reference, by default
void BubbleSort(int a[100], int n) {
	for (int i = 0 ; i <= n - 2 ; i++) {
		for (int j = 0 ; j <= n - 2 - i ; j++) {
			if (a[j] > a[j + 1]) {
				// swap a[j] and a[j+1]
				swap(a[j], a[j + 1]);
			}
		}
	}
}


void PrintTable(int init, int fval, int step) {

	for (int f = init; f <= fval ; f = f + step) {
		int c = (5 * (f - 32)) / 9;
		cout << f << " " << c << endl;
	}
}


int main() {

	// int a[100] = {7, 8, 6, 4, 3, 1};
	int a[100];
	int n;

	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	Print(a, n);
	BubbleSort(a, n);
	Print(a, n);

	cout << "Printing Table: " << endl;
	PrintTable(0, 300, 20);




	return 0;
}