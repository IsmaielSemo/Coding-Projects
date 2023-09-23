#include <iostream>
using namespace std;
int main()
{
	for(int x = 0 ; x < 5; x++)
	{
		for(int y = 0 ; y < 5; y++)
		{
			if(x == y)
				cout << 0;
			else
				cout << 1;
				
		}
		cout << endl; //go to the next line after the row is complete
	}
}
