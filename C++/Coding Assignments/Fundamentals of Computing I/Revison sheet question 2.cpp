#include <iostream>
using namespace std;

main()
{
	for(int x = 0 ; x < 6 ; x++){ //always start from 0
		for(int y = 1; y <= x +1; y++){ //note relation between y and x . If you do y<=x only it will skip the first row!
			if(x %2 ==0)
				cout << y << "\t";
			else
				cout << "$" << "\t";
		}	
		cout << endl;
	}
	cout << endl;
	
	for(int x = 0; x <=5; x++){
		int z = 1;
		for(int y = 0; y<=x; y++){
			if(x%2 == 0){
				cout << z << "\t";
				z++;
			}
			else
				cout << "$" << "\t";
		}
		cout << endl;
	}
}
