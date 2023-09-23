#include <iostream>
#include <string>
using namespace std;
//function that reverses a string without using a char array

void Function(string y, string &temp, int n){
	if(n==0)
		return;
	temp += y[n-1];
	Function(y,temp,n-1);		
		
}
	
	
	


main()
{
	string x = "ABC";
	string l = "";
	Function(x,l,3);
	cout<<l;
}
