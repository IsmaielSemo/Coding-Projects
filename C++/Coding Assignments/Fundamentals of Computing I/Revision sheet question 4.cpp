#include <iostream>
using namespace std;

main()
{
	for(int x = 0; x <4; x++){
		if(x == 0){ //for 1st row output
			for(int y = 0; y <5; y++){
				cout << y << "\t";
			}
		}
		else if(x == 1){ //for 2nd row output
			for(int y = 5; y< 10; y++){
				cout << y << "\t";
			}
		}
		else if(x == 2){ //for 3rd row output
			for(int y =9; y >= 5; y--){
				cout << y << "\t";
			}
		}
		else if (x == 3){ //for 4th row output
			for(int y = 4; y >= 0; y--){
				cout << y << "\t";
			}
		}
		cout << endl;
		}
	}
	
//NOTE: BE AWARE OF FOR LOOP COUNTER WHEN IT STARTS AND WHEN IT ENDS!!!!!!
