#ifndef LIST_H
#define LIST_H

template <class keyType, class dataType>
class List
{
public:
// Member Functions
List(); // Create an empty List
~List(); // Class Destructor
// Functions Prototype Definitions
bool listIsEmpty() const;
bool curIsEmpty() const;
void toFirst(); bool atFirst() const;
void advance(); void toEnd();
bool atEnd() const; int listSize() const;
void updateData (const dataType & );
void retrieve (keyType &, dataType &) const;
void insertFirst (const keyType &, const dataType & );
void insertAfter (const keyType &, const dataType & );
void insertBefore (const keyType &, const dataType & );
void insertEnd (const keyType &, const dataType & );
void deleteNode(); void deleteFirst();
void deleteEnd(); void makeListEmpty();
bool search (const keyType & );
void orderInsert(const keyType &, const dataType & );
void traverse();
bool sameAs( List &); //header file for sameAs function
private:
// Node Class
 class node
 {
public:
keyType key; // key
dataType data; // Data
node *next; // pointer to next node
 }; // end of class node declaration
typedef node * NodePointer;
NodePointer head, cursor, prev; // Pointers
 }; // End of class List declaration

#endif
#include "List.cpp"


