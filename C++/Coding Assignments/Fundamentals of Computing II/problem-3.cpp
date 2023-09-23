

//Problem3


#include <iostream>
#include<cmath>
using namespace std;


void GetPythTrip(int &i, int &j, int &a, int &b, int &c){ //pass by reference
	a = pow(i,2) - pow(j,2); //using the pow operation in the math library
	b = 2 * i * j;
	c = pow(i,2) + pow(j,2);
}

int main()
{
	//Everything below is simply testing the function and outputing to console
	
	int m = 4; 
	int n = 3;
	int x, y, z; //variable declaration
	if(m < n) // m has to be greater than 9
		cout << "Incorrect input" << endl;
	else{
		GetPythTrip(m,n,x,y,z);
		cout << "The value of a is : " << x << endl;
		cout << "The value of b is : " << y << endl;
		cout << "The value of c is : " << z << endl;
		}	
	return 0;
}
