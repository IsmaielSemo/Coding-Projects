#include <iostream>
using namespace std;

//converting number of seconds to respective hours, minutes, and seconds


main()
{
	char a;
	do
	{
		int x;
		int hours;
		int minutes;
		int seconds;
		cout << "Enter a positive integer number of seconds : ";
		cin >> x;
		if(x < 0)
			cout << "Time can never be negative!!" << endl;
		else{
			if(x >= 3600){
				hours = x / 3600;
				int xhours;
				xhours = x - 3600;
				while(xhours > 3600)
					xhours = xhours - 3600;
				minutes = xhours / 60;
				seconds = x - (minutes*60 + hours*3600);
				cout << x << " seconds is : " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds" << endl;
			}
			
			else{
				hours = 0;
				minutes = x/60;
				seconds = x - (minutes*60);
				cout << x << " seconds is : " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds" << endl;
			}
		}
		cout << "Do you want to continue Y/N? ";
		cin>>a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program!" << endl ;	
	
	
}
