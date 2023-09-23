#include <iostream>
#include <cmath>
using namespace std;

//two identical patterns using different algorithms 
main()
{
	for(int x = 5 ; x > 0; x--){
		for(int y = x-1 ; y>=0 ; y--){
			cout << pow(2, y) << "\t";
		}
		cout << endl;
	}
	for(int x =0; x < 5; x++){
		for(int y = 4-x; y>=0; y--){
			cout << pow(2,y) << "\t";
		}
		cout << endl;
	}
}

