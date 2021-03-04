// SpiralPrint.cpp
#include <iostream>
using namespace std;

int main() {

	char a[100][100];
	int r, c;

	cout << "Enter row and columns ";
	cin >> r >> c;
	
	char ch='X';
	
	int sr = 0, sc = 0, er = r - 1, ec = c - 1;

	while (sr <= er and sc <= ec) {
		
		for (int j = sc ; j <= ec ; j++) {
			a[sr][j]=ch;
		}
		sr++;

		for (int i = sr ; i <= er ; i++) {
			a[i][ec]=ch;
		}
		ec--;
		
			for (int i = ec ; i >= sc ; i--) {
				a[er][i]=ch;
			}
			er--;
		
			for (int i = er ; i >= sr ; i--) {
				a[i][sc]=ch;
			}
			sc++;
			if(ch=='X'){
				ch='O';
			}
			else{
				ch='X';

			}
		
	}
	cout << endl;

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j<c; j++)
		{
			cout<<a[i][j]<<" ";
			/* code */
		}
		cout<<endl;
		/* code */
	}
	cout<<endl;


	return 0;
}
