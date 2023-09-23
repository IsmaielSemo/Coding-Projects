#include<iostream>
#include <string>
#include <fstream>
using namespace std;


void SelectionSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		int x = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[x])
				x = j;
		}
		int temp = arr[i];
		arr[i] = arr[x];
		arr[x] = temp;
	}
}


void InsertionSort(int arr[], int n){
	for(int i = 1; i < n; i++){
		int j = i-1;
		int temp = arr[i];
		
		while(j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

main()
{
	int A[7] = {6,1,3,2,7,9,4};
	cout << "Before : ";
	for(int i = 0; i < 7; i++)
		cout << A[i] << " ";
	cout << endl;
	//InsertionSort(A,7);
	SelectionSort(A,7);
	cout << "After :";
	for(int i = 0; i < 7; i++)
		cout << A[i] << " ";
}
