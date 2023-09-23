//Assignment 1

//Applied Data Structures

#include <iostream>
#include <cstring>
#include "Stackt.h"

using namespace std;


void Towers(int n,int &moves, Stackt <int> &Source, Stackt <int> &Target, Stackt <int> &Aux); //declaring the function at the start
void MoveDisk(int disk_number, int &m, Stackt <int> &S, Stackt <int> &T, Stackt <int> &AU); //declaring the function at the start
void ResetStacks(Stackt <int> &Source, Stackt <int> &Target, Stackt <int> &Aux); //declaring the function at the start

int main()
{
	char answer; //variable to be used to repeat the program
	int N; //number of disks
	Stackt <int> A('A'); //the original stack
	Stackt <int> B('B'); //the auxialary stack
	Stackt <int> C('C'); //the final/destination stack
	do{
		int M = 0; //number of moves
		ResetStacks(A,B,C); //function that resets the stacks in case user is going through second iteration
		cout << "How many pegs do you want to play the game with?";
		cin >> N; //the number of pegs
		for (int i = N; i >= 1; i--)
			A.Push(i); //Fills in the source stack in the correct order! (smaller number on top)
		cout << "The stacks before the game begins are: " << endl; //displaying the three stacks before the game begins
		cout << "Peg A: ";
		A.Display(); //display of A
		cout << "Peg B: ";
		B.Display(); //display of B
		cout << "Peg C: ";
		C.Display(); //display of C
		cout << "\n------------------------------------------" << endl;
		Towers(N,M, A, C, B);
		cout << "\n" << endl;
		cout << "The total number of moves is: " << M << endl;
		cout << "Would you like to repeat the game (Y) or would you like to reveal the answer to the End of The Universe Question? (N)" << endl; 
		cin >> answer; //user input to see if they'd like to repeat the code
	}while(answer == 'Y' || answer == 'y'); //if yes, then another iteration begins
	cout << "----------------------------------------" << endl;
	
	/* What follows below is the solution to the "End of The Universe problem
		The solution is presented over multple couts. Furthermore, my compiler wasn't able to calculate the number, so i used a calculator and wrote it down directly
	*/
	cout << "In regards to the End of The Universe question, below is the solution:" << endl;
	cout << "The total number of moves is 2^N -1, where N is the number of disks. ";
	cout << "Therefore, 64 disks corresponds to 2^64 -1 moves which is equal to 18446744073709552000 moves which is further equal to 18446744073709552000 seconds" << endl;
	cout << "This insanely large number in years corresponds to 5.849424174 * 10^11 years!" << endl;
	
}

void Towers(int n, int &moves, Stackt <int> &Source, Stackt <int> &Target, Stackt <int> &Aux) {// the 2nd paramter is the number of moves, which isn't mentioned in the assignment file
	if (n == 1) { //if the disk number is 1, then move it directly to the target
		MoveDisk(n, moves, Source, Target, Aux);
	}
	else {
		Towers(n - 1, moves, Source, Aux, Target); //recursively advance through the stacks
		MoveDisk(n,moves,Source, Target,Aux); //move the disk
		Towers(n - 1, moves, Aux, Target, Source); //recursively advance
	}

}

void MoveDisk(int disk_number,int &m, Stackt <int> &S, Stackt <int> &T, Stackt <int> &AU) {
	int temp; //variable to access the dynamic array that is built in the stack
	S.Pop(temp); //pops the element from the source stack
	T.Push(temp); //pushes the popped element into the target stack
	m++; //increases the number of moves
	cout << "Disk " << disk_number << " was moved from Peg " << S.getStackName() << " to Peg " << T.getStackName() << endl;
	cout<< "The pegs after move " << m << ": " << endl;
	/* Purpose of the below if statements is just to identify what Stacks have been passed to the function since the parameters get shifted during the recursion
	   This allows for maintaining the order of things, which is a very crucial element of the functioning of this game.
	*/
	if(S.getStackName() == 'A'){ //checks if Stack S could be Peg A
		cout << "Peg A: ";
		S.Display();
	}
	else{ //if Stack S isn't A, then explore the other possibilities (T and AU)
			if (T.getStackName() == 'A'){ //checks if T could be A
			cout << "Peg A: ";
			T.Display();
		}
			else{
				cout << "Peg A: "; //checks if AU could be A
				AU.Display();
			}	
		}
	if(S.getStackName() == 'B'){ //checks if Stack S could be Peg B 
		cout << "Peg B: ";
		S.Display();
	}
	else{ //explore the other two possibilities
		if(T.getStackName() == 'B'){ // checks if T could be B
			cout << "Peg B: ";
			T.Display();
		}
		else{
			cout << "Peg B: "; //checks if AU could be B
			AU.Display();
		}
	}
	
	if(S.getStackName() == 'C'){ //checks if Stack S could be Peg C
		cout << "Peg C: ";
		S.Display();
	}
	else{// explore the other two possibilites
		if(T.getStackName() == 'C'){// checks if T could be C
			cout << "Peg C: ";
			T.Display();
		}
		else{
			cout << "Peg C: "; //checks if AU could be C
			AU.Display();
		}
	}
	
	cout << "\n------------------------------------------" << endl; 	
}


void ResetStacks(Stackt <int> &Source, Stackt <int> &Target, Stackt <int> &Aux){ //this function resets the stacks for another run of the code
	int temp; //variable to access the dynamic array that is built in the stack
	while(!Source.isStackEmpty())
		Source.Pop(temp); //pops all the elements while the stack is not empty
	while(!Target.isStackEmpty())
		Target.Pop(temp); //pops all the elements while the stack is not empty
	while(!Aux.isStackEmpty())
		Aux.Pop(temp); //pops all the elements while the stack is not empty
}
