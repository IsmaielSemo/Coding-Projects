//Assignment 5 number 3 + 4

#include <iostream>
#include "List.h"
using namespace std;

template <class keyType, class dataType>
List <keyType, dataType> GetDecimal(int x) //function is of type List so it returns a list
{
	List <int,int> i; //creates a list
	if(x==0) //if the number is zero then there is only one digit and one key that is zero
		i.insertFirst(0,0);
	else{
	int y = x; //copies x value to another variable
	int key = 0; //initializes key value (which represents the number of digits in the number)
	while(y >0){ //this while loop finds the number of digits in the number
		y = y/10;
		key++;
	}
	while(x > 0){
		key--; //decrease the ky value at the start (so that when the 1st digit is reached the key value is zero)
		int temp = x % 10; //extract the digit
		i.insertFirst(key,temp); //insert it at the start
		x = x/10; //decrease number
	
	}
}
	return i; //return the list

}


main()
{
	cout << "Problem 3:\n\n" << endl;
	int n = 93452; //number that we will pass
	cout << "The number is: " << n << endl;
	if(n < 0){ //checks if the number is negative
		cout << "Can't enter a negative number" << endl;
	}
	else{
		List <int,int> L= GetDecimal<int,int>(n); //create a list who's elements are the keys and the individual digits
		cout << "The individual digits and their respective keys are : " << endl;
		L.traverse(); //traverse that list
	}
	
	cout << "========================================================\n\n" << endl;
	
	cout << "Problem 4:\n\n" << endl;
	List <int, int> a; //first list
	List <int, int> b; //second list
	List <int, int> c; //third list
	a.insertFirst(0,0); // what follows is inserting elements in the first list
	a.insertFirst(1,1);
	a.insertFirst(2,2);
	a.insertFirst(3,3);
	
	b.insertFirst(0,0); //what follows is inserting elements in the second list
	b.insertFirst(1,1);
	b.insertFirst(2,2);
	b.insertFirst(3,3);
	
	c.insertFirst(0,0); //what follows is inserting elements in the third list
	c.insertFirst(1,1);
	c.insertFirst(2,2);
	c.insertFirst(3,4);
	
	cout << a.sameAs(b) << endl; //first case
	cout << b.sameAs(a) << endl; // second case (should be the same)
	cout << c.sameAs(a) << endl;
	cout << c.sameAs(b) << endl;
	cout << a.sameAs(a) << endl; //checking same as with self
	
}
