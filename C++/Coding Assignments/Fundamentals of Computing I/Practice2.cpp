#include <iostream>
using namespace std;

//1 2 2 3 4 5 and 1 2 6 --> 1 2
//repition problem
Function(int x1[], int x2[], int size1, int size2 )
{
	for(int y =0; y < size2; y++){
		for(int z =0; z < size1; z++){
			if(x1[z] == x2[y]){
				cout << x1[z];
				break;
			}
		}
		continue;
	}
}


main()
{
	int s1, s2;
	cout << "Enter the size of the 1st array: ";
	cin >> s1;
	cout << "Enter the size of the 2nd array: ";
	cin >> s2;
	int a1[s1];
	int a2[s2];
	cout << "Enter elements of 1st array: ";
	for(int b =0; b < s1; b++)
		cin >> a1[b];
	cout << "Enter elements of 2nd array: ";
	for(int b =0; b < s2; b++)
		cin >> a2[b];
	Function(a1,a2,s1,s2);
}
