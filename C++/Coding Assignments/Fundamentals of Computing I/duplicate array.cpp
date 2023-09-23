#include <iostream>
using namespace std;

int Duplicate(int a[], int x, int d[]){
	int v =0;
	int c = 0;
	for(int y = 0; y < x; y++){
		for(int z = y+1; z< x; z++){
			if(a[y] == a[z]){	
				d[v] = a[y];
				v++;
				c++;
		}
	}
}
	return c;
}

main()
{
	int size;
	cout << "Enter size of array : ";
	cin >> size;
	int arr[size];
	int duplicate[size] = {};
	cout << "Enter elements of array : ";
	for(int b = 0; b < size; b++)
		cin >> arr[b];
	
	cout << "--------------------------------------- \n \n" << endl;
	cout << "The duplicated array : " << endl;
	for(int b =0; b <Duplicate(arr,size, duplicate)  ; b++){
		cout << duplicate[b] << "  ";
	}
	cout << endl;
}
