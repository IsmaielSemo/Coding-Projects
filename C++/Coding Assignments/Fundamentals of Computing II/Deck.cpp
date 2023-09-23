

//Assignment 4 Deck class implementation file

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

Deck :: Deck(){ //constructor for Deck class
	top = -1; //initiliazes top to -1
}

Deck :: ~Deck(){ //destructor for Deck class
	
}

void Deck :: Create_Fresh_Deck(){ //function that creates a fresh deck
	cardType c; //object of type cardType
	string v = "23456789TJQKA"; //string v that contains all the possible ranks in the game as a string
	top = -1; //sets the top as -1
	for(int i = 0; i < 4; i++){
		for(int j = 0; j <13; j++){
			c.suit = char(i+3); //gets the char value by casting
			c.rank = v[j];
			AddCard(c);
		}
	}
}

bool Deck :: EmptyDeck() const{ //checks if the deck is empty
	if(top == -1)
		return true;
	else
		return false;
}

Deck::cardType Deck :: RemoveCard(){ //function that removes card
	cardType temp = D[top]; //retrieve the top card and stores it in an object
	top--; //decrease top
	return temp; // returns that object
}

void Deck :: AddCard(const cardType &c) { //function that adds card (takes a card as a parameter)
	D[++top] = c;
}

void Deck :: swap(int i, int k){ //swapping two cards
	cardType temp; //temporary cardType object to be used for swap
	temp = D[i];
	D[i] = D[k];
	D[k] = temp;
}

void Deck :: Shuffle_Deck(){ //shuffling through the deck
	srand((unsigned) time(NULL));
	for(int i = 51; i >=1; i--){
		int k = rand() % (i+1); //using rand function to an index of a card to swap with i
		swap(i,k);
	}
}

void Deck :: Cut_Deck(){ //function that cuts the deck and then swaps upper half with lower half
	int j = 26;
	for(int i = 0; i < 26; i++){
		swap(i,j);
		j++;
	}
}

void Deck :: Display_Deck() const{ //function that displays a deck
	if(!EmptyDeck()){
		for(int i = 0; i <= top; i++)
			cout << D[i].suit<< " "<< D[i].rank << endl;
	}
}












