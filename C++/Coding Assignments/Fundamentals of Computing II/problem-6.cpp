

//Problem6


#include <iostream>
using namespace std;

bool descendOrder(int A[], int n){
	for(int i = 0; i < n; i++){
		int x = A[i]; //reads element
		int y = A[i+1]; //reads the element after it
		if(y>x) // compares the two and returns false if not in descending order
			return false;
	}
	return true;
}

int main()
{
	//4 arrays declared (we expect 1 true and 3 false judging by the data entry)
	int a[5] = {1,2,3,4,5};
	int b[5] = {5,4,3,2,1};
	int c[5] = {7,4,2,1,3};
	int d[5] = {7,4,6,2,1};
	
	//Everything below is simply testing the function and outputing to console
	
	cout << "The first array : ";
	for(int z = 0; z <5; z++)
		cout << a[z] << " ";
	if(descendOrder(a,5)) //if true
		cout << " is in descending order" << endl;
	else
		cout << "is NOT in descending order" << endl;
	cout << "----------------------------------" << endl;
	
	cout << "The second array : ";
	for(int z = 0; z <5; z++)
		cout << b[z] << " ";
	if(descendOrder(b,5))
		cout << " is in descending order" << endl;
	else
		cout << "is NOT in descending order" << endl;
	cout << "----------------------------------" << endl;
	
	cout << "The third array : ";
	for(int z = 0; z <5; z++)
		cout << c[z] << " ";
	if(descendOrder(c,5))
		cout << " is in descending order" << endl;
	else
		cout << "is NOT in descending order" << endl;
	cout << "----------------------------------" << endl;
	
	cout << "The fourth array : ";
	for(int z = 0; z <5; z++)
		cout << d[z] << " ";
	if(descendOrder(d,5))
		cout << " is in descending order" << endl;
	else
		cout << "is NOT in descending order" << endl;
	cout << "----------------------------------" << endl;
	return 0;
}
