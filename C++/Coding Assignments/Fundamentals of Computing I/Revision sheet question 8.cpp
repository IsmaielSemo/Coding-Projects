#include <iostream>
using namespace std;

//need to resolve this problem!

void fun(int a []){
	int y;
	int max = 0;
	int max2 = 0;
	for(int y = 0; y < sizeof(a) ; y++){
		if(max < a[y]){
			max2 = max;
			max = a[y];
		}
		if(max2 < a[y] && a[y] < max){
			max2 = a[y];
		
			
	}
	cout << max2;
}


main()
{
	int b[4];
	for(int x = 0; x < 4 ; x++)
		cin >> b[x];
	fun(b);
}
