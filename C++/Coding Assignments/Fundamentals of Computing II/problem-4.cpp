

//Problem4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void rarray(int a[], int s){
	for(int b = 0; b < s; b++)
		a[b] = rand() % 2; // randomly prints out either 0 or 1 
}

int main(){
	//Everything below is simply testing the function and outputing to console
	
	srand(time(0)); //changes the random output every iteration
	
	
	int Array[5], array[5]; 
	rarray(Array,5); //Array is automatically passed by reference
	cout << "First run : ";
	for(int b = 0; b < 5; b++)
		cout << Array[b] << "  "; //prints out the contents of the array
	cout << endl; //ends line after execution
	cout << "Second run : ";
	rarray(array,5);
	for(int b = 0; b < 5; b++)
		cout << array[b] << "  "; //prints out the contents of the array
	cout << endl; //ends line after execution
	
	return 0;
	
}
