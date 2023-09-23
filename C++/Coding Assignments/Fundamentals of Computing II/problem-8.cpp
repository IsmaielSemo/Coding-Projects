

//Problem 8

#include <iostream>
#include <string> //string is included so that we can use some of its built-in functions
using namespace std;

bool Unique(string x,string y){
	int m = x.length(); //gets the length of the BIG string
	int n = y.length(); //gets the length of the substring
	int o = 0; // a counter that will be used to determine whether substring is unique or no
	for(int i =0; i <(m-n)+1; i++){ //traversing the main string 
		for(int j = 0; j < n;j++){ //traversing the substring
			if(x[i+j] != y[j]){
				break;
			}
			if(x[i+j] == y[j]){ //if substring == main string
				o++; //increment the counter
				i = i + (n-1); //increment i such that it passes the length of the contained substring (so that the reading in the next iteration begins from after the substring)
			}
				
		}
	}
	if(o == 1) //o == 1 implies that o=1 which means substring occured only once --> unique
		return true;
	else
		return false;
			
}

	

int main()
{
	
	//declaring the strings to test the function on
	string a = "abcabc";
	string s = "abc";
	string b = "abcdef";
	
	//Everything below is simply testing the function and outputing to console
	
	cout << "The first case : \nThe big string is : " << a << "\nThe substring is : " << s << endl;
	if(Unique(a,s))
		cout << "The substring is unique" << endl;
	else
		cout << "The substring is NOT unique" << endl;  
	cout << "----------------------------------------" << endl;
	
	cout << "The second case : \nThe big string is : " << b << "\nThe substring is : " << s << endl;
	if(Unique(b,s))
		cout << "The substring is unique" << endl;
	else
		cout << "The substring is NOT unique" << endl;  
	cout << "----------------------------------------" << endl;	
	return 0;
}
