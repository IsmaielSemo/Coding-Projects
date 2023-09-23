#include <iostream>
#include <cmath>
using namespace std;

//this code converts from binary to decimal and vice-versa

bool bincheck(int abc){
	int rem;
	while(abc >0){
		rem = abc % 10;
		if(rem != 0 && rem != 1)
			return true;
	
		abc = abc / 10;
	}
	return false;
}


bool binsize(int def){
	int len;
	for(len = 0; def > 0; len++){
		def = def/10;
	}
	if(len >4)
		return false;
	else
		return true;
}


int main()
{ 
	cout << "Welcome to this binary to decimal conversion and vice versa" << endl;
	char b;
	do{
		char r;
		cout << "Please select which conversion you want to carry out : \n 1) Binary To Decimal \n 2) Decimal to Binary ";
		cin >> r;
		if(r == '1'){
			cout << "----------------------------------------------------------------------------------" << endl;
			int bin;
			int digit;
			int sum = 0;
			int a = 0;
			cout << "Enter a binary number of 4 bits : ";
			cin >> bin;
			if(binsize(bin) == 0)
				cout << "The binary number is greater than 4 bits " << endl;
			else{
				if(bincheck(bin) == 1)
					cout << "This binary number is invalid" << endl ;
				else{
					while(bin > 0){
						digit = bin % 10;
						sum = sum + (digit * pow(2, a) );
						bin = bin / 10;
						a++;
						}
				cout << "The binary number in decimal is : " << sum << endl;
				}
			}
		}	
		
	
	
		else if(r == '2'){
			cout << "----------------------------------------------------------------------------------" << endl;
			int x = 0;
			int bit;
			int dec;
			cout<< "Enter a decimal number : ";
			cin >> dec;
			int c = 0;
			while(dec >0){
				bit = dec % 2;
				x = x + (bit * pow(10, c));
				dec = dec/2;
				c++;
			}
			cout << "The decimal number in binary is : " << x << endl;
		}
		else
			cout << "You entered an invalid number" << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> b;
	} while(b == 'Y' || b == 'y');
	
	cout << "Thank you for using my program!" << endl;

	
}
