// PointerAndArrays.cpp
#include <iostream>
using namespace std;
// int*a === int a[]
void Print(int *a, int n) {
	//sizeof(a): 8bytes, because a is a pointer
	for (int i = 0 ; i < n ; i++) {
		cout << *(a + i) << " "; // a[i] === *(a+i)
	}

	cout << endl;
}

void BubbleSort(int* a, int n) {
	for (int i = 0 ; i <= n - 2 ; i++) {
		for (int j = 0 ; j <= n - 2 - i ; j++) {
			if (a[j] > a[j + 1]) {
				// swap a[j] and a[j+1]
				swap(a[j], a[j + 1]);
			}
		}
	}
}


int main() {

	int a[] = {1, 2, 30, 14, 5, 60, 17, 8, 10, 12};
	int n = sizeof(a) / sizeof(int);

	Print(a, n); // a: It denotes the address of the 0th Index bucket
	BubbleSort(a, n);
	Print(a, n);



	return 0;
}