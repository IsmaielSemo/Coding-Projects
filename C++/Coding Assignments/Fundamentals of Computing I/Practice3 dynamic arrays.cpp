#include <iostream>
using namespace std;

int Function(int x[], int s){
	int sum = 0;
	for(int a = 0; a < s; a++){
		sum += x[a];
	}
	return sum/s;
}


main()
{
	int size;
	cout << "Enter size of array : ";
	cin >> size;
	int *p = new int[size];
	for(int b = 0; b < size; b++)
		cin>> p[b];
	cout << Function(p,size);
	delete p;
}
