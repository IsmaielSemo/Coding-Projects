#include <iostream>
using namespace std;

//swapping variables using XOR


main()
{
  char a;
  do{ //XOR is false if both inputs are similar(like 0 XOR 0, 1 XOR 1) otherwise it's true
	  int x , y;
	  cout << "Enter two numbers : ";
	  cin >>x ;
	  cin >> y;
	  cout << "Before swapping x = " << x << " and y = " << y << ".\n";
	  
	  //swapping using bitwise operator
	  x = x^y;
	  y = x^y;
	  x = x^y;
	   
	  cout << "After swapping x = " << x << " and y = " << y << ".\n";
	  
	  cout << "Do you want to continue Y/N?";
	  cin >> a;
	}while(a == 'Y' || a == 'y');
	
	cout << "Thank you for using my program!" << endl;
}
