

//Problem2

#include <iostream>
using namespace std;


void Converter(int &s, int &h, int &m){ //passed by reference
	h = s / 3600; //gets number of hours
	int remh = s % 3600; // gets remianing seconds from hour and store in new variable
	m = remh / 60; // gets number of minutes
	s = s % 60; //gets number of seconds
	
}

int main(){
	
	//Everything below is simply testing the function and outputing to console
	
	int seconds = 14567;; //user will input seconds
	int hours;
	int minutes;
	if(seconds <0 || seconds > 18000)
		cout << "Incorrect input" << endl;
	else{
		Converter(seconds,hours,minutes);
		cout << hours << "hours \n" << minutes << "minutes \n" << seconds << "seconds" << endl; 
		
	} 
	return 0;
}
