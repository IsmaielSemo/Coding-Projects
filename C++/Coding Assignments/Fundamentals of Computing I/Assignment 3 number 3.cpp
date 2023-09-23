#include <iostream>
using namespace std;

//Swapping by reference and by pointers

void byRef(int &a, int &b, int &c){
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	
}

void byPtr(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;	
}


main()
{
	char a;
	do{
		int x;
		int y;
		int z;
		cout << "Enter 3 numbers : " << endl;
		cin >> x;
		cin >> y;
		cin >> z;
		int choice;
		cout << "Pass By Ref --> 1 \n Pass By ptr --> 2 ";
		cin >> choice;
		if(choice == 1){
			cout << "Before swap : " << x << "\t" << y << "\t" << z << endl;
			byRef(x,y,z);
			cout << "After swap : " << x << "\t" << y << "\t" << z << endl;
		}
		else if(choice == 2){
			cout << "Before swap : " << x << "\t" << y << "\t" << z << endl;
			byPtr(&x, &y, &z);
			cout << "After swap : " << x << "\t" << y << "\t" << z << endl;
		}
		else
			cout << "You entered an invalid number " << endl;
		cout << "Do you want to continue Y/N ? " ;
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! ";
	
}
