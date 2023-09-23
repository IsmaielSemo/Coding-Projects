

//Problem1

#include <iostream>
using namespace std;


char uppercase(char b){
	if(int(b) >= 65 && int(b) <= 90) //if letter is uppercase
		return b; //returns uppercase letter
	else
		return char(b - 32); // converts lowercase to uppercase
}

int main()
{
		//Everything below is simply testing the function and outputing to console
		char a = 'a';
		char b = 'B';
		cout << "Before calling function : " << a << endl;
		cout << "After calling function : " << uppercase(a) << endl;
		cout << "=====================" << endl;
		cout << "Before calling function : " << b << endl;
		cout << "After calling function : " << uppercase(b) << endl;
		
		return 0;
}
