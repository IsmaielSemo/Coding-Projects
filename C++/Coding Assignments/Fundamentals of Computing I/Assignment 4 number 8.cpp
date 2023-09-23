#include <iostream>
using namespace std;

//fucntion that gets the sum of even and odd numbers and stores it in another array


function(int arr[], int size , int y[2])
{
	int sumodd = 0;
	int sumeven = 0;
	for(int z = 0; z < size; z++){
		if(arr[z] % 2 == 0)
			sumeven = sumeven + arr[z];
		else
			sumodd = sumodd + arr[z];
	}
	
	y[0] = sumeven;
	y[1] = sumodd;
	
}


main()
{
	char r;
	do{	
		int len;
		cout << "Enter size of array : ";
		cin >> len;
		int a[len];
		cout << "Enter the elements of the array : " << endl;
		for(int q =0; q < len ; q++)
			cin >> a[q];
		int *x = new int(2);
		function(a , len, x);
		for(int c = 0; c < 2; c++){
			cout << x[c];
			cout << endl;
	}
		delete x;
		cout << "Do you want to continue Y/N ? ";
		cin >> r;
		} while(r == 'Y' || r == 'y');
	}
