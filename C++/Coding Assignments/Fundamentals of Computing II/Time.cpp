#include <iostream>
using namespace std;

Time :: Time(){
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time :: Time(int h, int m, int s){
	if(h > 0 && h < 24)
		hours = h;
	else
		hours = 0;
	if(m >0 && m<60)
		minutes = m;
	else
		minutes = 0;
	if(s >0 && s <60)
		seconds = s;
	else
		seconds = 0;
}

Time :: ~Time(){
}

void Time :: SetTime(int h, int m, int s){
	if(h > 0 && h < 24)
		hours = h;
	else
		hours = 0;
	if(m >0 && m<60)
		minutes = m;
	else
		minutes = 0;
	if(s >0 && s <60)
		seconds = s;
	else
		seconds = 0;
}

void Time :: GetTime() const{ 
	cout << hours << endl;
	cout << minutes << endl;
	cout << seconds << endl;
}
