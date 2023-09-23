#include <iostream>
using namespace std;
int main()
{
	char A; // the Y/N variable
	do{
		int x, y, z; //declaring 3 variables of type int.Each variable represents a score.
		cout << "Please enter the first score : " ;
		cin >> x; //first score stored in x
		cout << "Please enter the second score : " ;
		cin >> y; //second score stored in y
		cout << "Please enter the third score : " ;
		cin >> z; //third score stored in z
		if(x >= y && x >= z) //checks if x is the singular highest score 
			cout << "The highest score is " << x << endl; 
		else if(y >= x && y >= z) //checks if y is the singular highest score
			cout << "The highest score is " << y << endl;
		else if(z >= y && z >= x) //checks if z is the singualr highest score
			cout << "The highest score is " << z << endl;
		cout << "Do you want to continue Y/N?";
		cin >> A;
	}while(A == 'y' || A == 'Y'); // conditional expression to loop the program
	cout << "Thank you for using my program :)" << endl; 
	
	
		
}
