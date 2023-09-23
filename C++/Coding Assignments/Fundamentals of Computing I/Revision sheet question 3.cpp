#include <iostream>
using namespace std;

main()
{
	for(int x = 0; x < 5; x++){ //focus while setting loop paramter bounds!
		for(int y = 0; y < 5; y++){ // focus while setting loop paramter bounds!
			if(x == y)
				cout << 1 << "\t";
			else if(x == 4 && y ==3) //the anomaly
				cout << 1 << "\t";
			else
				cout << 0 << "\t";
				
		}
		cout << endl;
	}
}
