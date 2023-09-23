#include <iostream>
using namespace std;

//printing out a pattern

main()
{
	for(int x =0; x <5; x++){
		for(int y =0; y<=x; y++){
			cout << "*" << "   ";
		}
		cout << endl;
	}
}
