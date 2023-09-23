#include <iostream>
using namespace std;

bool Exists(int big, int d)
{
		if(big % 10 == d)
			return true;
		else{
			if(big > 1)
				Exists(big/10, d);
			else
				return false;
		}
}

main()
{
	char a;
	do
	{
		int number, digit;
		cout << "Enter a big number : ";
		cin >> number;
		cout << "Enter a digit : ";
		cin >> digit;
		if(Exists(number, digit))
			cout << "True" << endl;
		else
			cout << "False" << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
