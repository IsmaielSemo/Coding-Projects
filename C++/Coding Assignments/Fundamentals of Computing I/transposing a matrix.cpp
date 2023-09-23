#include <iostream>
using namespace std;

// 1 2  // 1 3
// 3 4  // 2 4

main()
{
	int r, c;
	cout << "Enter length of row and column : ";
	cin >> r;
	cin >> c;
	int x[r][c];
	cout << "Enter elements of array: ";
	for(int b = 0; b < r; b++){
		for(int d = 0; d<c ; d++)
			cin >> x[b][d];
	}
	cout << "--------------------------------------------- \n \n" << endl;
	cout << "The original array: " << endl;
	for(int b = 0; b < r; b++){
		for(int d = 0; d<c ; d++)
			cout << x[b][d] << "  ";
		cout << endl;
	}
	cout << "-------------------------------------------- \n \n" << endl;
	cout << "The transposed array : " << endl;
	for(int b = 0; b < r; b++){
		for(int d = 0; d<c ; d++)
			cout << x[d][b] << "  ";
		cout << endl;
	}
}
