#include <iostream>
using namespace std;

SMDigits(int n, int &sum, int &product) 
{
	int d = n % 10;
	sum = sum + d;
	product = product * d;
	if(n > 1)
		SMDigits(n/10, sum, product);
}

main()
{
	char a;
	do{
		int number;
		int s = 0;
		int p = 1;
		cout << "Enter a set of digits : ";
		cin >> number;
		SMDigits(number, s, p);
		cout << "The sum of the digits is " << s << endl;
		cout << "The product of the digits is " << p << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program!" << endl;
	
}
