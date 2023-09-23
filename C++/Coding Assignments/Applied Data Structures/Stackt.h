//Assignment 1

//Applied Data Structures

//header file for Stack class

#ifndef STACKT_H
#define STACKT_H

template <class Type>
class Stackt{
	public:
		Stackt(char); //constructor (the paramater represents the name of the stack/peg)
		~Stackt(); //destructor
		void Push(Type); //pushes an element to stack
		void Pop(Type &); //pops an element from stack
		void GetTop(Type &) const; //returns the element at the top
		bool isStackEmpty() const; //checks if stack is empty (in case we need to pop)
		bool isStackFull() const; //checks if stack is full (in case we need to push)
		char getStackName() const; //getter for the Name parameter
		void Display(); //displays the content of the stack
		
	private:
		char Name; //will refere to the stack name
		Type *stack; //pointer of type Type (we will use it to create dynamic array in the implementation file)
		int top; //variable used for index of Top (will be used in array)
		int Maxsize; //variable for maxsize (will be used to make comparisons in the bool functions)
};

#endif
#include "Stackt.cpp"
