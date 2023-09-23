#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int *Function(string x){
	int N = x.length();
	int *P = new int [N];
	for(int i =0; i < N; i++){
		char temp = x[i];
		P[i]= (int)temp;
	}
	
	return P;
}

main(){
	cout << Function("ABC");
}
