#include <iostream>
using namespace std;

//gets the sum of even/odd digits and the number of even digits in a given number


main()
{ 
	char a;
	do
	{
		int ecount = 0;
		int esum = 0;
		int osum = 0;
		int digit;
		int x;
		cout << "Enter a number between 999 and 999999 : ";
		cin >> x;
		if(x < 999 || x > 999999)
			cout << "You entered an invalid number" << endl;
		else{
			while(x > 0){
				digit = x % 10;
				if(x % 2 == 0){
					ecount++;
					esum = esum + digit;
				}
			else
				osum = osum + digit;
			x = x/10;
		}
			cout << "The sum of even digits is : " << esum << endl;
			cout << "The number of even digits is : " << ecount << endl;
			cout << "The sum of odd digits is : " << osum << endl;	
		
	}
		
		cout << "Do you want to continue Y/N?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program!" << endl;
}
