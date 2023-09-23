#include <iostream>
using namespace std;

int Factorial(int f);

int SumFact(int f,int &y)
{
	if(f == 0)
		y = y + 1;
	else{
		y = y + Factorial(f);
		SumFact(f-1,y); 
	}
	return y;
		
}

int Factorial(int f)
{
	if(f == 0)
		return 1;
	else
		return	f * Factorial(f-1);
}

main()
{
	char a;
	do{
		int x;
		int sum = 0;
		cout << "Enter number to get its factorial sum : ";
		cin >> x;
		cout << SumFact(x, sum) << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
}while(a == 'Y' || a == 'y');
	cout << "Thank you for using my program !" << endl;
	
}
