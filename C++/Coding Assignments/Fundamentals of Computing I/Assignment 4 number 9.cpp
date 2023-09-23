#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

//hexadecimal to decimal converter and vice-versa


int Hex2Dec(char hexa[], int x)
{
	int decimal = 0;
	int i = 0;
	for(int y = x-1; y >= 0; y--){
		if(hexa[y] >= '0' && hexa[y] <= '9'){
			decimal = decimal + ((hexa[y]-48) * pow(16,i));
			i++;
		}
		else if(hexa[y] >= 'A' && hexa[y] <= 'F'){
			decimal = decimal + ((hexa[y] -55) * pow(16,i));
			i++;
		}
		else if (hexa[y] >= 'a' && hexa[y] <= 'f'){		
			decimal = decimal + ((hexa[y]-87)* pow(16, i));
			i++;
		}
			}
	return decimal;
	
}

void Dec2Hex(int dnumber)
{
	string h = "";
	int r;
	int c = 0;
	while(dnumber > 0){
		r = dnumber % 16;
		if(r >= 0 && r <= 9){
			h += r + 48;
		}
		else{
			h += r + 55;
		}
		dnumber = dnumber / 16;
	}
	for( int y = h.length() - 1; y >=0; y--)
	{
		cout << h[y];
	}
}


main()
{
	char a;
	do{
		int choice;
		cout << "Select what operation you would like to perform : \n 1) Hexadecimal to Decimal \n 2) Decimal to Hexadecimal ";
		cin >> choice;
		cout << "======================================" << endl;
		if(choice == 1){
			int size;
			cout << "Size of Hexadecimal number : ";
			cin >> size;
			char hex[size];
			cout << "Enter a Hexadecimal number : ";
			for(int y = 0; y < size; y++)
				cin >> hex[y];
			cout << "The number in decimal is : " << Hex2Dec(hex, size) << endl;
		}
		else if (choice == 2){
			int dec;
			cout << "Enter a decimal number : ";
			cin >> dec;
			cout << "The number in hexadecimal : "; 
			Dec2Hex(dec);
			cout << endl;
			
		}
		else
			cout << "You entered a wrong input" << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
