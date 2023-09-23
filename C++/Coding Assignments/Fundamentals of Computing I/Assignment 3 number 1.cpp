#include <iostream>
using namespace std;


//code that gets how many digits in a number (up to 3 only)


main(){
	char a;
	do{
		int count = 0;
		int x;
		int y;
		cout << "Enter a postive integer between 0 and 99999 inclusive : ";
		cin >>x;
		if(x < 0 || x > 99999)
			cout << "You entered an invalid number " << endl;
		else if(x == 0)
			cout << "One Single Digit " << endl;
		else
		{
			while(x > 0){
				y = x % 10;
				count++;
				x = x / 10;
			}
			if(count == 1)
				cout << "One Single Digit " << endl;
			else if (count == 2)
				cout << "Two Big Digits " << endl;
			else if (count == 3)
				cout << "Three Big Digits " << endl;
			else
				cout << "More and more digits " << endl;
		}
		cout << "Do you want to continue Y/N ? ";
		cin >> a;
	} while( a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
	
}
