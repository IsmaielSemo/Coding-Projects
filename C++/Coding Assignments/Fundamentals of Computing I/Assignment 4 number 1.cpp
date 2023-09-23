#include <iostream>
using namespace std;

//copying a char array


StringCopy(char Target [], char Source [])
{
	for(int a =0; a < sizeof(Target); a++)
		Target[a] = Source[a]; 
}

main()
{
	char a;
	do{
		int x;
		cout << "Enter size of char array : ";
		cin >> x;
		char og[x];
		char copy[x];
		cout << "Enter elements of the array : ";
		for(int y =0; y < x; y++)
			cin >> og[y];
		StringCopy(copy, og);
		cout << "The copied array : ";
		for(int y =0; y < x; y++)
			cout << copy[y];
		cout << endl;
		cout << "Do you want to continue Y/N ?" << endl;
		cin >> a;
}while (a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
