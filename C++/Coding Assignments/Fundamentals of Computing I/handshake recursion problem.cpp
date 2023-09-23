#include <iostream>
using namespace std;

int handShake(int n)
{
	if(n == 1)
		return 0;
	else if(n == 2)
		return 1;
	else
		return (n-1) + handShake(n-1);
}


main()
{
	int x;
	cout << "Enter number of people to handshake : ";
	cin >> x;
	cout << handShake(x);
}
