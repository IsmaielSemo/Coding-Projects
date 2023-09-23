#include <iostream>
using namespace std;


bool isMagic(int y[][3]){ //must write the column number to avoid error!
	int sumdiagonal1 = 0; //sum of diagonal 1
	int sumdiagonal2 = 0; //sum of diagonal 2
	for(int i = 0; i < 3 ; i++){
		sumdiagonal1 += y[i][i]; //first diagonal from top left to top right
		sumdiagonal2 += y[i][2-i]; // second diagonal (for n columns it will be y[i][n-1-i] )
	}
	if(sumdiagonal1 != sumdiagonal2)
		return false;
	for(int i = 0; i < 3; i++){
		int sumrow = 0; 
		int sumcolumn = 0;
		for(int j = 0; j < 3; j++){
			sumrow += y[i][j]; //sum of each row (which is why sumrown and sumcolumn are declared inside for loop so they are initialized after every iteration
			sumcolumn += y[j][i]; // sum of each column
		}
		if(sumrow != sumcolumn && sumrow != sumdiagonal1)
			return false;
		else
			return true;
	}
	
	
}

main()
{
	int x [3][3];
	cout << "Fill out a 3x3 matrix : ";
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3 ; b++){
			cin >> x[a][b];
		}
	}
	if(isMagic(x))
		cout << "This is a magic square " << endl;
	else
		cout << "This is NOT a magic square " << endl;
}
