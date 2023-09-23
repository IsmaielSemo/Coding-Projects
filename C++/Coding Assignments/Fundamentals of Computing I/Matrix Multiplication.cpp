#include <iostream>
using namespace std;



void Function(int a1[3][3], int a2[3][3])
{
	int a3[3][3] = {0,0,0,0,0,0,0,0,0};
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			for(int z =0; z < 3; z++)
				a3[x][y] += a1[x][z] * a2[z][x];  	
		}
	}
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			cout << a3[x][y] << "  ";  	
		}
		cout << endl;
	}	
}

main()
{
	int arr1[3][3];
	int arr2[3][3];
	cout << "Enter elements of array 1 : ";
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			cin >> arr1[x][y];
		}
	}
	cout << "Enter elements of array 2 : ";
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			cin >> arr2[x][y];
		}
	}
	Function(arr1,arr2);
}
