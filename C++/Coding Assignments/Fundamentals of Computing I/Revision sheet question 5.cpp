#include <iostream>
using namespace std;

main()
{
	int odd = 1; // for 2nd line
	int even = 2; // for 4th line
	for(int x = 0; x < 6 ; x++){
		for(int y = 6-x; y>0 ; y--){ // y related to x to get inverted triangle
			if(x % 2 == 0)
				cout << "#" << "\t" ;
			else
				if(x == 1){
					cout << odd << "\t";
					odd = odd +2;
				}
				else if(x == 3){
					cout << even << "\t";
					even = even + 2;
				}
				else if(x == 5) // last line
					cout << 3; 
			
		}
	cout << endl;
	}
}
