#include <iostream>
using namespace std;

//building the function that gets length of string

int Stringlen(char String[])
{
	int x = 0;
	while(String[x] != '\0'){
		x++;
	}
	return x;
}

main()
{
	char b;
	do{
		char a[128] = {};
		cout << "Enter elements of array : ";
		cin >> a;
		cout << "The length of the string is : " << Stringlen(a) << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> b;
}while(b == 'Y' || b == 'y');
cout << "Thank you for using my program! " << endl;
}
