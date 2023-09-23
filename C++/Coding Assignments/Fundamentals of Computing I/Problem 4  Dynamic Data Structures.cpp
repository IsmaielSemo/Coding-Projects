#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int  *Function(int A[][3],int N, int M){
	int L = ((N*N)-N)/2;
	int *P = new int [L];
	int k = 0;
	for(int i = 0; i < N; i++){
		for(int j =i+1; j<M;j++){
			P[k] = A[i][j];
			k++;
		}
	}
	cout << P[0] << " " << P[1] << " " << P[2] << " ";
	return P;
}


main(){
	int Array[3][3] = {1,2,3,4,5,6,7,8,9};
	cout << Function(Array,3,3);
}
