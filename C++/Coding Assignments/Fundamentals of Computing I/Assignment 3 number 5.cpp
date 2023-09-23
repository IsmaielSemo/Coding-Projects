#include <iostream>
using namespace std;

//checks max/min once by pointers and then another time by reference

int MaxMinR(int &a, int &b, int &c, int &max, int &min){
	if(a > b && a > c){
		max = a;
		if(b > c)
			min = c;
		else
			min = b;
	}
		
	else if(b > a && b > c){
		max = b;
		if(a > c)
			min = c;
		else
			min = a;
		}
	else if(c > a && c > b){
		max = c;
		if(a > b)
			min = b;
		else
			min = a;
		}
	else if(a == b){
		if(a > c){
			max = a;
			min = c;
		}
		else{
			max = c;
			min = a;
		}
	}
	
	else if(a == c){
		if(a > b){
			max = a;
			min = b;
		}
		else{
			max = b;
			min = a;
		}
	}
	
	else if(b == a){
		if(b > c){
			max = b;
			min = c;
		}
		else{
			max = c;
			min = b;
		}
	}
	
	else if(b == c){
		if(b > a){
			max = b;
			min = a;
		}
		else{
			max = a;
			min = b;
		}
	}
	else if (a == c && a == b){
		max = a;
		min = c;
	}
	
}

int MaxMinP(int *a, int *b, int *c, int *max, int *min){
	if(*a > *b && *a > *c){
		*max = *a;
		if(*b > *c)
			*min = *c;
		else
			*min = *b;
	}
		
	else if(*b > *a && *b > *c){
		*max = *b;
		if(*a > *c)
			*min = *c;
		else
			*min = *a;
		}
	else if(*c > *a && *c > *b){
		*max = *c;
		if(*a > *b)
			*min = *b;
		else
			*min = *a;
		}
	else if(*a == *b){
		if(*a > *c){
			*max = *a;
			*min = *c;
		}
		else{
			*max = *c;
			*min = *a;
		}
	}
	
	else if(*a == *c){
		if(*a > *b){
			*max = *a;
			*min = *b;
		}
		else{
			*max = *b;
			*min = *a;
		}
	}
	
	else if(*b == *a){
		if(*b > *c){
			*max = *b;
			*min = *c;
		}
		else{
			*max = *c;
			*min = *b;
		}
	}
	
	else if(*b == *c){
		if(*b > *a){
			*max = *b;
			*min = *a;
		}
		else{
			*max = *a;
			*min = *b;
		}
	}
	else if (*a == *c && *a == *b){
		*max = *a;
		*min = *c;
	}
}


main()
{
	char a;
	do{
		int high;
		int low;
		int x;
		int y;
		int z;
		int choice;
		cout << "Enter 3 numbers : ";
		cin >> x;
		cin >> y;
		cin >> z;
		cout << "1- Check through passing by reference"<< endl;
		cout << "2- Check through passing by pointers ";
		cin >> choice;
		if(choice == 1){
			MaxMinR(x, y, z, high, low);
			cout << high << " " << low << endl;
	}
		else if(choice == 2){
			MaxMinP(&x,&y,&z,&high,&low);
			cout << high << " " << low << endl;
	}
		else
			cout << "You entered an invalid number " << endl;
		cout << "Do you want to continue Y/N ? ";
		cin >> a;
} while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program! " << endl;
}
