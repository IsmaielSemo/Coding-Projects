#include <iostream>
using namespace std;
int main()
{
	for(int x = 0; x < 5 ; x++)
	{
		for(int y = 0; y < 5 ; y++)
		{
			if(x == y)
				cout << 0;
			else if(y >x)
				cout << 3;
			else if(x > y)
				cout << 2;	
		}
		cout << endl;	
	}	
}
