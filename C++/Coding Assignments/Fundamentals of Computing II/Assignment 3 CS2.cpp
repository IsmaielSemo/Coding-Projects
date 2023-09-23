
//main program/driver's program

#include<iostream>
#include <fstream>
#include <string>
#include "Stackt.h" 
using namespace std;

void DFS(int **a,int n, int k){
	int *V = new int [n]; //creating a dynamic int array to store the order
	bool unseen = false; 
	bool hold = true;
	for(int i = 0; i < n; i++)
		V[i] = unseen; //initializing the order array as all unseen (the false value will automatically be changed to -1)
	int sum = 0; //sum represents the distance
	Stackt <int> s('A'); //creating the stackt object
	s.Push(k); //push the index of the city into the stack
	while(!s.isStackEmpty()){ //while the stack is NOT empty
		int order; //declaring variable order
		int x; //variable used to access stackt
		s.Pop(x); //calling the pop function
		cout << "The current source is " << x << endl;
		order++; //increase the order
		V[x] = order; //store the order in the array
		for(int j = n-1; j>=0; j--){ //traverse the columns from rightmost to leftmost
			if(a[x][j] != 0){ //if there is a direct connection/edge between the two cities
				if(V[j] == unseen){ //if the city is unseen
					s.Push(j); //push the city onto the stack
					V[j] = hold; //make the city seen (the int value for true is 0)
					sum +=a[x][j]; //increment the sum variable
				}
				}
			}
		}
		
	
	cout << "The order is: " << endl;
	
	for(int i = 0; i < n; i++)
			cout << V[i] << " "; //printing out the order
	
	cout << endl;
	cout << "The total distance covered is " <<sum << endl; //printing out the sum i.e the total distance
	
	delete []V; //deleting dynamic array after using it
	
	
	
}

void FillArray(int **A, int N){//function that fills in the created 2d dynamic array with the contents of the file
	ifstream f; //creating a filestream object
	f.open("Cities15.txt"); //opening the file
	if(f.fail()){ //condition if the file didn't open
		cout << "File failed to open" << endl;
	}
	else{
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++)
				f >> A[i][j]; //passing in the data from the file to the array
		}
		f.close(); //closing the file after finishing the data transfer
	}
}

int GetSizeOfFile(){//function that will the size of file --> N (so that it works for any int N)
	int size = 0; //variable for size
	ifstream f; //creating filestream object
	string temp; //creating a temporary string to feed in the file
	f.open("Cities15.txt"); //opening the file
	while(!f.eof()){ //while the end of the file has not been reached
		getline(f,temp); //using the built in getline method
		size++; //increments size (after finishing a line in the file)
	}
	f.close(); //closing file after getting size
	return size; //returning the size
}

int main()
{
	int N = GetSizeOfFile(); //we will call the function to get the size of the inputted file
	int **Array = new int* [N]; //next 2 lines are dedicated to creating a 2d dynamic array of number of rows and columns N
	for(int i = 0; i < N; i++) 
		Array[i] = new int [N];
	FillArray(Array, N);//calling a function to fill the created array with the file info
	DFS(Array,N,0); //DFS algorithm
	for(int i = 0; i < N; i++) //next two lines are dedicated to deleting the 2d dynamic array
		delete [] Array[i];
	delete [] Array;
	return 0;
}
