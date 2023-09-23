//Assignment 1 

//Applied Data Structures

//implementation file of Stackt class

#include <iostream>
using namespace std;
template <class Type>
Stackt <Type> :: Stackt(char p){
	Maxsize = 128; //initializes the maxsize of the stack array
	stack = new Type[Maxsize]; //creates the dynamic array
	top = -1;	//initializes the top index
	Name = p;
}

template <class Type>
Stackt <Type> :: ~Stackt(){
	delete [] stack; //deletes the dynamic array
}

template <class Type>
void Stackt <Type> :: Push(Type x){
	if(isStackFull()) //checking if the stack is full i.e we can't add new elements into it anymore
		cout << "Can't push! The stack is full" << endl;
	else
		stack[++top] = x; //add element to stack array(and increase top number BEFORE adding to readjust array)
}
template<class Type>
char Stackt<Type>::getStackName() const //getter function that returns the stack's name
{
	return Name;
}

template <class Type>
void Stackt<Type> :: Display(){ //function that displays the content of the stack
	for(int i = top; i >= 0; i--) //goes through the stack and prints it out in reverse to maintain appropriate order (small always on top!)
		cout << stack[i] << " ";
	cout << "\t";
}

template <class Type>
void Stackt <Type> :: Pop(Type &x){
	if(isStackEmpty()) //checking if stack is empty i.e we can't remove any more elements because these elements don't exist
		cout << "Can't pop! The stack is empty" << endl;
	else{
		x = stack[top--]; //remove element from stack array (and decrease top variable AFTER removing to readjust array)
	}
}

template <class Type>
void Stackt <Type> :: GetTop(Type &x) const{
	if(isStackEmpty())
		cout << "The stack is empty" << endl; //if stack is empty, then no top element exists
	else{
		x = stack[top]; //gets the top
		cout << x << endl; //prints the top
	}
}

template <class Type>
bool Stackt <Type> :: isStackEmpty() const{
	if(top < 0) //if the stack is empty
		return true;
	else
		return false;
}

template <class Type>
bool Stackt <Type> :: isStackFull() const{
	if(top >= Maxsize-1) //if the stack is full
		return true;
	else
		return false;
}















