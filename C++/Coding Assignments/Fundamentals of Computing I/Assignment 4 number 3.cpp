#include <iostream>
using namespace std;

//building the string concatenate function

StringConcatenate(char string1[128], char string2[128], char strCon[256])
{
	
	int x = 0; 
	int y = 0;
	while(string1[x] != '\0' || string2[y] != '\0') {
		if(string1[x] != '\0'){
			strCon[x] = string1[x];
			x++;
		}
		else{
			strCon[x] = string2[y];
			x++;
			y++; 
		}
	}	
}

main()
{
	char a;
	char a1[128] = {};
	char a2[128] = {};
	char a3[256] = {};
	do{
		cout << "Enter elements of array 1 : ";
		cin >> a1;
		cout << "Enter elements of array 2 : ";
		cin >> a2;
		for(int z =0; z < 256; z++)
			a3[z] = '\0';
		cout << "The concatenated array : " << endl;
		StringConcatenate(a1, a2, a3);
		cout << a3;
		cout << endl;
		cout << "Do you want to continue Y/N ? ";
		cin >> a;
}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
