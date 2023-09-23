#include <iostream>
#include <cstring>
using namespace std;



FibSeq(int x)
{
	if(x == 0)
		return 0;
	else if(x == 1)
		return 1;
	else
		return FibSeq(x -1) + FibSeq(x-2);
}

main()
{
	char a;
	do{
		int number;
		cout << "Enter the number of elements you want in Fib : ";
		cin >> number;
		for(int i = 0; i < number; i++)
			cout<< FibSeq(i) << endl;
		cout << "Do you want to continue Y/N ?";
		cin >> a;
	}while(a == 'Y' || a == 'y');
}
