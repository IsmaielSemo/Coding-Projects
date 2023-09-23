#include <iostream>
using namespace std;

//exploring the difference between the contents of a variable passed by pointer and that passed by reference

void passbyPtr(int *a, int *b){
		cout << "The value inside a is " << a << "\t The value inside b is " << b << endl;
}

void passbyRef(int &a, int &b){
	cout << "The address of a is " << &a << "\t The address of b is " << &b << endl;
}

main()
{
	int x = 10;
	int y = 15;
	cout << "By reference: " <<endl;
	cout << " The address of x is " << &x << "\t The address of y is " << &y << endl;
	passbyRef(x, y);
	cout << "___________________________________________________________" << endl;
	cout << "By pointers : " << endl;
	cout << " The address of x is " << &x << "\t The address of y is " << &y << endl;
	passbyPtr(&x, &y);
}
