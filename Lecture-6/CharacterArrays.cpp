#include <iostream>
using namespace std;

int main() {

	char a[100];
	// 3rd way of taking input along with whitespaces
	// cin.getline(array_name,sizeofArray,delimiter);, inserts NULL at the end on its own
	// delimiter is optional, by default delimiter is '\n'
	// NULL is '\0' and newline character is '\n'
	cin.getline(a, 100);
	cout << a << endl;

	// 1st way of taking input along with whitespaces
	// char ch;
	// int i = 0;
	// ch = cin.get();
	// while (ch != '@') {

	// 	a[i] = ch;
	// 	i++;

	// 	ch = cin.get();
	// }
	// a[i] = '\0';
	// cout << a << endl;

	// 2nd way of taking input without whitespaces
	// cin inserts NULL at the end on its own
	// cin >> a;
	// cout << a << endl;

	return 0;
}