#include <iostream>
using namespace std;

//hello --> olleh


void reverse(char st[], int i)
{
	if(st[i] != '\0')
	{
		reverse(st,i+1);
	}
	cout<<st[i];
}

main()
{
	char b;
	char a[238] = {};
	do{
		cout<< "Enter a string: ";
		cin>>a;
		cout << "The reversed string is : ";
		reverse(a,0);
		cout << endl;
		cout << "Do you want to continue Y/N ? ";
		cin >> b;
	}
	while(b == 'Y' || b == 'y');
	cout << "Thank you for uisng my program! " << endl; 
	
	
}
