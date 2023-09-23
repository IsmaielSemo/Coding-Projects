
//Problem5

#include <iostream>
using namespace std;
void reverse(int a[], int x){
		int c = 0;
		for(int i = x-1; i >= 0; i--){
			if(c < i){ //as long as c (the counter that traverses the array from left to right) is smaller than i (counter from right to left), keep swapping. This is important as without it, the original array will be returned. 
				int temp = a[c]; // a swap using temp
				a[c] = a[i];
				a[i] = temp;
				c++;
			}
			else
				break; //break once c is no longer less than i
	}
}



int main()
{
	//Everything below is simply testing the function and outputing to console
	
	int A[5] = {1,2,3,4,5}; //declares static array of user defined size n
	cout << "Before calling function : ";
	for(int b = 0; b < 5; b++)
		cout << A[b];
	cout << endl;
	cout << "After calling function : ";
	reverse(A,5);
	for(int b = 0; b < 5; b++)
		cout << A[b]; //printing out the reversed array
	return 0;
	
}
