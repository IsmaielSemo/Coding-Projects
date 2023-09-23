#include <iostream>
using namespace std;

common(int x[], int y[], int s1, int s2){ //important to send size as parameter to avoid the extra 0s problem
	if(s1 > s2){ //first case when a1 > a2 (i compare with respect to the smallest)
		for(int i =0; i < s2 ; i++){
			for(int j = 0; j < s1; j++){
				if(x[i] == y[j]){
					cout << x[i] << "  ";
				}
			}
		}
	}
	else{ // second case
		for(int i = 0; i < s1; i++){
			for(int j = 0; j < s2; j++){
				if(x[i] == y[j]){
					cout << x[i] << "  ";
				}
			}
		} 	
	}
}

main()
{
	//int a1[];
	//int a2[]; NOTE YOU CAN'T INITIALIZE ARRAY WITHOUT SIZE!!!
	int size1;
	int size2;
	int a1[size1];
	int a2[size2];
	cout << "Enter size for first array : ";
	cin >> size1;
	cout << "Enter size for second array : ";
	cin >> size2;
	cout << "Enter elements of first array : ";
	for(int a = 0; a < size1; a++)
			cin >> a1[a];
	cout << "Enter elements of second array : ";
	for(int b = 0; b < size2; b++)
		cin >> a2[b];
	common(a1, a2, size1, size2);
}
