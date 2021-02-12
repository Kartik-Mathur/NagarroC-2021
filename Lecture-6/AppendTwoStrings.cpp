// AppendTwoStrings.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "Hello";
	char b[100] = "World! We are learning Strings!";

	int lena, lenb, i, j;

	for (lena = 0 ; a[lena] != '\0' ; lena++) {}

	for (lenb = 0 ; b[lenb] != '\0' ; lenb++) {}

	i = lena; j = 0;

	while (j <= lenb) {
		a[i++] = b[j++];
	}
	cout << a << endl;


	return 0;
}