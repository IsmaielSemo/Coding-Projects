#include <iostream>
using namespace std;

//iterative code for factorial

int factorial(int x)
{
	int sum =0;
	while(x >= 0){
		int temp =1;
		for(int z=x; z >0; z-- ){
				temp = temp * z;
		}
		sum = sum + temp;
		x--;
	}
	return sum;
}

main()
{
	char a;
	do{
		int num;
		cout << "Enter a number to calculate its factorial sum : ";
		cin >> num;
		cout << factorial(num) << endl;
		cout << "Do you want to continue Y/N ? ";
		cin >> a;
	}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program!" << endl;
}
