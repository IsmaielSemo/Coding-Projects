
//Assignment 4 Deck class header file

#ifndef DECK_H
#define DECK_H

class Deck{
	public:
		class cardType{ //the class cardType
			public:
				char suit, rank;
		};
		Deck(); //constructor
		~Deck(); //destructor
		void Create_Fresh_Deck(); //function that creates a fresh deck
		bool EmptyDeck() const; //function that checks if a deck is empty or not
		Deck::cardType RemoveCard(); //function that removes a card
		void AddCard(const cardType &); // function that adds a card
		void Shuffle_Deck(); //function that shuffles through a deck
		void Cut_Deck(); //function that cuts a deck
		void Display_Deck() const; //function that displays a deck
	private:
		int top; //variable for top
		cardType D[52]; //array of cardType (52 cards like the game)
		void swap(int i, int k); //a swap function
};

#endif
#include "Deck.cpp"
