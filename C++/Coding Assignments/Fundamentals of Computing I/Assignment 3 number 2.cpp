#include <iostream>
#include <cmath>
using namespace std;

//table of temp values converted from fehrenheit to celcius


main()
{
	char a;
	do{
		int start;
		int end;
		int step;
		int celsius;
		cout << "Enter a start temp value in fahrenheit(>= 50 & <=200), end temp value in fahrenheit, and a step count : ";
		cin >> start;
		cin >> end;
		cin >> step;
		if(start <50 || start > 200)
			cout << "The input value/s is/are out of mentioned range " << endl;
		else{
			if(start < end){
				cout << "=========================" << endl;
				cout << "   " << "Fahrenheit \t Celsius " << endl;
				cout << "_________________________" << endl;
				for(int x = start; x <= end; x+=step){
					cout << x << "\t \t";
					celsius = round(5.0/9.0 * (x - 32));
					cout << celsius;
					cout << endl;
				}
				cout << "=========================" << endl;
			}
			else if(start == end){
				cout << "=========================" << endl;
				cout << "   " << "Fahrenheit \t Celsius " << endl;
				cout << "_________________________" << endl;
				cout << start << "\t \t";
				celsius = round(5.0/9.0 * (start - 32));
				cout << celsius;
				cout << endl;
				
				cout << "=========================" << endl;
			}
			else{ //this part incomplete
				cout << "=========================" << endl;
				cout << "   " << "Fahrenheit \t Celsius " << endl;
				cout << "_________________________" << endl;
				for(int y = end; y >= start; y-=step){
					cout << y << "\t \t";
					celsius = round(5.0/9.0 * (y - 32));
					cout << celsius;
					cout << endl;
					cout << "=========================" << endl;
		}
	}
		
	
	}
	cout << "Do you want to continue Y/N ? ";
	cin >> a;
} while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;	
}

