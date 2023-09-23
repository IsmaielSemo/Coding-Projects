#include <iostream>
using namespace std;

main()
{ 
	int n=1 , j=1;
	for (int i=0; i<4; i++)
 	{
		for (int k=j; k<=n*4; k++)
 		{
 		cout<<k;
 		}
 	n++;
 	j=j+4;
 	cout<< endl;
 	}
}
