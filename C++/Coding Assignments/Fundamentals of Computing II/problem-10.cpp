
//Problem10

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int maxLen(string infile){
	ifstream i; //creating ifstream object
	int max = 0; //initializing max to 0
	i.open(infile.c_str()); //opening file
	string s;
	while(!i.eof()){
		getline(i,s); //using built-in function getline
	if(s.length() > max)
		max = s.length();
	}
	return max;
}

int main(){
	//Everything below is simply testing the function
	
	string file = "Problem10.txt";
	ifstream f; //created to output file contents to console
	f.open("Problem10.txt");
	cout << "The contents of the file are : " << endl;
    if (f.is_open()) //outputing contents of file to console
        cout << f.rdbuf() << endl;
    f.close();
    cout << "-------------------------------------" << endl;
	cout << "The maximum length of a line in the file is : " <<maxLen(file) << endl;
	return 0;
	
}

