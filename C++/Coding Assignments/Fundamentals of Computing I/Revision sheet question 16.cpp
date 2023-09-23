#include <iostream>
using namespace std;

int ADD(int &x, int &y)
{
	return x + y;
}

main()
{
	int num1;
	int num2;
	cout << "Enter two integer numbers : ";
	cin >> num1;
	cin >> num2;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	cout << ADD(*ptr1, *ptr2); 
}
