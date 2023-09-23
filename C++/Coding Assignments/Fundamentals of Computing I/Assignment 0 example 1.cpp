#include <iostream>
using namespace std;

//prints out duplicates in an array

Duplicate(int arr[] , int size, int d[]){
	int v=0;
	int c=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				d[v]=arr[i];
				v++;
				c++;
				break;
			}
		}
	}
	return c;
}

main()
{
	int x;
	int a[x];
	int duplicate[x];
	cout << "Enter size of array : " << endl;
	cin >> x;
	cout << "Enter elements of array : ";
	for(int y = 0; y < x; y++)
		cin >> a[y];
	Duplicate(a,x, duplicate);
	for(int i=0; i<Duplicate(a,x, duplicate);i++)
	{
		cout<< duplicate[i]<< "    ";
	}
}




