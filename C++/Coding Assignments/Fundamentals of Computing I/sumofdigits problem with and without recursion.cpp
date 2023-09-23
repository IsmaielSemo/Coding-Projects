#include <iostream>
using namespace std;

int sDNoRecursion(int x){
	int rem;
	int sum = 0;
	while(x > 0){
		rem = x % 10;
		sum += rem;
		x = x/10;
	}
	return sum;
}


int sDRecursion(int x){
	if(x/10 > 0)
		return (x%10) + sDRecursion(x/10); 
}


main()
{
	int number;
	cout << "Enter a number : ";
	cin >> number;
	cout << sDNoRecursion(number) << endl;
	cout << sDRecursion(number) << endl;
	
}
