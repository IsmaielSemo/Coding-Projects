#include <iostream>
#include <cmath>
using namespace std;

// 1 2 1 4

GetMax(int a[], int x,int &max){
	for(int y =0; y < x; y++){
		if(a[y] > max){
			max = a[y];
			GetMax(a,x,max);
		}
	}
	return max;
}


main()
{
	int m = 0;
	int size;
	cout << "Enter size of array : ";
	cin >> size;
	int arr[size];
	cout << "Enter elements of array : ";
	for(int y =0; y<size; y++)
		cin >> arr[y];
	cout<< GetMax(arr, size, m);
}
