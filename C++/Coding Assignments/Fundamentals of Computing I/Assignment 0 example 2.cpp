#include <iostream>
using namespace std;

//testing out the cout statement and general arithmetic operations (including postincrement and preincrement)

main()
{
	int x=1, y=2, z=3;
	
	cout << "x + y * z = " << x+y*z << endl;
	cout << "(x+y) * z = " << (x+y)*z << endl;
	
	cout << "Before x++ \t x= " << x << endl;
	cout << "After x++ \t x= "<< x++ << endl;
	cout << "-------------------------------" << endl;
	
	x=1;
	cout << "Before ++x \t x= " << x << endl;
	cout << "After ++x \t x= " << ++x << endl;
	
	y*=z;
	cout << "y = y * z or y *= z : " << y << endl;
}
