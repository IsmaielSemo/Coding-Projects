#include <iostream>
using namespace std;

int Occur(int x, int d, int &count)
{
	if(x % 10 == d)
		count++;
	if(x > 1)
		Occur(x/10, d, count);
	else
		return count;
	}


main()
{
	char a;
	do{
		int number, digit;
		int o = 0;
		cout << "Enter a big number : ";
		cin >> number;
		cout << "Enter a digit : ";
		cin >> digit;
		cout << "The number occurs " << Occur(number, digit, o ) << " times" << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
