#include <iostream>
#include <cmath>
using namespace std;

//a more advanced converter from different numerical systems (compared to binary to denary and vice-versa)

int Converter1(int n, int base, int exponent){
	int sum = 0;
	int a = 0;
	int digit;
	while(n > 0){
		digit = n % 10;
		sum = sum + (digit * pow(base , exponent) );
		n = n / 10;
		exponent++;
			}
	return sum;
		}
	
int Converter2(int number , int base){
		int x = 0;
		int c = 0;
		int bit;
		while(number >0){
			bit = number % base;
			x = x + (bit * pow(10, c));
			number = number/base;
			c++;
			}
		return x;
		}

main()
{
	char a;
	do{
		int num;
		int y;
		int schoice;
		int choice;
		cout<< "==== Main Menu ==== " << endl; 
		cout  << "1- Binary to Decimal" << endl;
		cout << "2- Decimal to Binary" << endl; 
		cout << "3- Octal to Decimal" << endl; 
		cout << "4- Decimal to Octal"<< endl;
		cout << "---------------------"<<endl;
		cout << "Enter your choice : ";
		cin >> choice;
		if(choice == 1){
			cout  << "1- Binary to Decimal" << endl;
			cout << "Enter a binary number : ";
			cin >> num;
			cout << "The binary number in decimal is : " << Converter1(num, 2, 0) << endl;
		}	
		else if (choice == 2){
			cout << "2- Decimal to Binary" << endl;
			cout << "Enter a decimal number : ";
			cin >> num; 
			cout << "The decimal number in bianry is : " << Converter2(num, 2) << endl;	
		}
		else if( choice == 3){
			cout << "3- Octal to Decimal" << endl;
			cout << "Enter an octal number : ";
			cin >> num;
			cout << "The octal number in decimal is : " << Converter1(num, 8, 0) << endl;
		}
		else if (choice == 4){
			cout << "4- Decimal to Octal"<< endl;
			cout << "Enter a decimal number : ";
			cin >> num;
			cout << "The decimal number in octal is : " << Converter2(num, 8) << endl;
		}
		else{
			cout << "You entered an invalid number, would you like to convert from a fictional date type to decimal(1) or vice versa (2) " << endl;
			cin >> schoice;
			if(schoice == 1){
				cout << "Enter a base (to be converted to decimal) ";
				cin >>y;
				cout << "Enter a number of said base : ";
				cin >> num;
				cout << "The number in decimal is : " << Converter1(num, y, 0) << endl;
			}
			else if(schoice == 2){
				cout << "Enter a base (to be converted to that base) ";
				cin >>y;
				cout << "Enter a decimal number: ";
				cin >> num;
				cout << "The converted decimal number is : " << Converter2(num, y) << endl;
			}
			else
				cout << "You entered an invalid option" << endl;
		}
		cout << "Again y/n : " ;
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
