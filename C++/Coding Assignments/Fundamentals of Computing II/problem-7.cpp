

//Problem7
#include <iostream>
using namespace std;

enum color { black, white 
	}; //declaration of the enum datatype 
	//black is 0 and white is 1
	//it's globally declared so that we can use it in the isNegative function
	
	
bool isNegative(color X[][2],color Y[][2]){ //must pass column number as this is 2D array
	for(int j = 0; j < 2; j++){
		for(int i = 0; i < 2; i++){
			if(Y[i][j] != (!X[i][j])) //if element from array 2 is NOT equal to the inverse of element in array 1, then return false (they are NOT negatives)
				return false; 
		}
	}
	return true;
}

int main()
{
	//black is 0 and white is 1!!!!
	
	//Everything below is simply testing the function and outputing to console
	
	color A[2][2] = {black,white,white,black};
	color B[2][2] = {white,black,black,white};
	cout << "Array 1 : ";
	for(int x =0; x<2;x++){
		for(int y =0; y<2;y++)
			cout << A[x][y];
	}
	cout << endl;
	cout << "Array 2 : ";
	for(int x =0; x<2;x++){
		for(int y =0; y<2;y++)
			cout << B[x][y];
	}
	cout << endl;
	if(isNegative(A,B)) // if true
		cout << "They are negatives" << endl;
	else
		cout << "They are NOT negatives" << endl;
	cout << "----------------------------------------" << endl;
	
	color C[2][2] = {black,white,white,black};
	color D[2][2] = {white,white,black,white};
	cout << "Array 3 : ";
	for(int x =0; x<2;x++){
		for(int y =0; y<2;y++)
			cout << C[x][y];
	}
	cout << endl;
	cout << "Array 4 : ";
	for(int x =0; x<2;x++){
		for(int y =0; y<2;y++)
			cout << D[x][y];
	}
	cout << endl;
	if(isNegative(C,D))
		cout << "They are negatives" << endl;
	else
		cout << "They are NOT negatives" << endl;
	cout << "----------------------------------------" << endl;
	
	return 0;
	
}
