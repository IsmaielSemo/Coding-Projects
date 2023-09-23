#include <iostream>
using namespace std;

//code that prints out a 2d array

display(char arr[5][5]){
	for(int a = 0; a < 5; a++){
		for(int b = 0; b < 5; b++){
			cout << arr[a][b] << "\t";
		}
		cout << endl;
	}
}



main()
{
	char a1[5][5];
	char a2[5][5];
	for(int x = 0 ; x< 5; x++){
		for(int y = 0; y < 5; y++){
			if(x == y)
				a1[x][y] = 'A';
			else if(y > x)
				a1[x][y] = 'Y';
			else
				a1[x][y] = 'X';
		}
	}
	
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			if(x > y)
				a2[x][y] = 'B';
			else
				a2[x][y] = 'A';
		}
	}
	
	display(a1);
	cout << "\n \n" << endl;
	display(a2);


}


