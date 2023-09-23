#include <iostream>
using namespace std;

//copying characters but up to a specific character limit


StringCopyLimit(char Target[], char Source[], int l)
{
	for(int a =0; a < l; a++)
		Target[a] = Source[a]; 
}
main()
{
	char a;
	do{
		int x, limit;
		cout << "Enter size of char array : ";
		cin >> x;
		char og[x];
		cout << "Enter elements of array : ";
		for(int y =0; y < x; y++)
			cin >> og[y];
		cout << "What is the limit of characters you want to copy? ";
		cin >> limit;
		if(limit > x)
			cout << "Incorrect input! " << endl;
		else{
			char copy[limit];
			StringCopyLimit(copy, og, limit);
			cout << "The copied array : " << endl;
			for(int y =0 ; y < limit; y++)
				cout << copy[y];
		}
		cout << endl;
		cout << "Do you want continue Y/N ? ";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
