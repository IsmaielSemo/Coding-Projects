//Main Program/Game file

#include <iostream>
#include "Deck.h"
using namespace std;

//simulation of a game of card decks

int CardIntValue(Deck::cardType temp){ //function that converts the card rank from its char value to its int value (based on the table given in the assignment)
	if(temp.rank == 'T')
		return 10; //T corresponds to 10 so return int value of 10
	else if(temp.rank == 'J')
		return 11; //J corresponds to 10 so return int value of 11
	else if(temp.rank == 'Q')
		return 12; //Q corresponds to 10 so return int value of 12
	else if(temp.rank == 'K')
		return 13; //K corresponds to 10 so return int value of 13
	else if(temp.rank == 'A')
		return 14; //A corresponds to 10 so return int value of 14
	else
		return (int) temp.rank; //if the char value is from 2 to 9, just return its int value by casting to an int
}


int main()
{
	int NP = 4; //the number of players
	string v = "23456789TJQKA"; //string containing all possible ranks
	Deck cdeck; //creating a deck
	Deck Hand[NP]; //hand of each player
	Deck::cardType c; //creating a card
	Deck::cardType cards[NP]; //creating an array of cards
	int score[NP]; //an array containing the scores of all the players
	int N = 0; //index of next player
	int p; //player number
	int wp; //index for winning variable
	int win; //variable for how much win
	cdeck.Create_Fresh_Deck(); //creating a new deck
	cdeck.Shuffle_Deck(); //shuffling that deck
	cdeck.Cut_Deck(); //cutting that deck
	cout << "The now formed deck: " << endl;
	cdeck.Display_Deck(); //then finally displaying the deck 
	
	//Now we can finally start playing the game
	
	while(!cdeck.EmptyDeck()){
		p = N % NP;
		Deck::cardType d = cdeck.RemoveCard(); //removing card from the deck and storing it in a temporary variable
		Hand[p].AddCard(d); //giving the removed card to one of the players
		N++;
	}
	
	//Printing out the scores of the players before the game
	cout << "The scores of the players before the game:" << endl;
	for(int i = 0; i < NP; i++){
		score[i] = 0;
		cout << "Player " <<i+1 << " : " << score[i] << endl;
	}
	
	//Printing out the cards of all the players	
	for(int i =0; i <NP; i++){
		cout << "Player " << i+1 << "'s cards : " << endl;
		Hand[i].Display_Deck();
	}
	
	cout << "\n\nLet the game begin!\n\n" << endl;
		
	int n = 1; //variable to keep track of the round number
	while(!Hand[0].EmptyDeck()){ //while the first player still has card/s
		cout << "Round " << n << ": " <<endl;
		for(int p = 0; p < NP; p++)
			cards[p] = Hand[p].RemoveCard(); //retrieve a card for each player
		wp = 0; //assuming the winning player is the first player
		Deck::cardType temp = cards[0]; //assume the winning card is the first card
		for(int i = 1; i < NP; i++){
			int prank = CardIntValue(cards[i]); //get the int value of current card
			int rtemp = CardIntValue(cards[wp]); //get the int value of the card that we assumed to be the winning one
			char psuit = cards[i].suit; //get the suit char value of the current card
			char stemp = temp.suit; //get the suit char value of the card that we assumed to be the winning one
			if(prank > rtemp){ //if the current card has a larger value than the assumed to be large card
				wp = i; //change the index of the winning player
				temp = cards[i]; //change the card to the new winning player
		}
			else if(prank == rtemp && (int) psuit > (int) stemp){ //if they have same int value of rank, check the suits int value by simply casting to an int
				wp = i;
			}
			
	}
		
	for(int i =0; i < NP; i++)
		cout << "Player " << i+1 << "'s card : " << cards[i].rank << " " << cards[i].suit << endl; //print the card of each of the four players
	cout << "The winning card of the round is : " << cards[wp].rank << " " << cards[wp].suit << endl; //print out the winning card
	score[wp]++; //increment score of the winning player
	cout << "The scores after Round " << n << " are :" << endl;
	for(int i = 0; i < NP; i++)
		cout << "Player " << i+1 << "'s score: " << score[i] << endl; //The scores of each of the players after the round
	cout << "\n" << endl;
	n++;// increment the round variable
	win = 0; //reset the win to 0
}
	cout << "------------------------------" << endl;
	int maxScore = score[0]; //assume maximum score to be the element at index 0
	int winner = 0; // assume index of max score to be at 0
	for(int i = 1; i < NP; i++){
		if(score[i] > maxScore){ // if it's larger than the maxScore
			maxScore = score[i]; //set new maxscore to this value
			winner = i; //set winner index to current i value
		}
	}
	int count = 0; //count variable to check if there are 2 players with the same winning score (a tie)
	for(int i = 0; i < NP; i++){ //for loop that checks if score = maxscore and increments count (to check for a potential tie)
		if(score[i] == maxScore)
			count++;
	}
	if(count == 1) //if there is one definitive winner
		cout << "The winner of the game is Player " << winner+1 << " with a score of " << score[winner] << " points!" << endl; // print out the winning player and the respective score of that player
	else{ //if there are multiple players with the same maximum score
		cout << "The end result of the game is a TIE between: ";
		for(int i = 0; i < NP; i++){ //prints out the players with the max score
		if(score[i] == maxScore)
			cout << "\n Player " << i+1 << endl;
	}
	}
	return 0;
}
