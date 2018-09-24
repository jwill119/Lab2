// LinkedList.h

// tom bailey   0740  5 oct 2010
// Declaration of the List class.

// A List stores and manages a sequence of doubles.

// This version uses a pointer to the first Node of a
//   singly linked list of Nodes.


#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include <iostream>
using std::ostream;

#include "Node.h"

#define ulong unsigned long


class List
{
public:
	//*** Standard functions ***

	// Default constructor
	// post: this List is empty.
	List();

	// Copy constructor
	// post: this List now stores a copy of the sequence stored
	//         in other
	List(const List & other);

	// Destructor
	// post: all the Nodes of this List have been destroyed.
	~List();

	// Assignment operator
	// post: this List now stores a copy of the sequence stored
	//         in other
	const List & operator=(const List & other);

	// Test for equality
	bool operator==(const List &rhs);


    // Sum method: Sums across all doubles in the linked list (if empty returns 0)
    double sum();

	//*** Accessors ***

	// post: true has been returned just if this List is
	//         empty.
	bool empty() const;
    
    // Check size of the list
    int size();

	// post: the doubles in this List have been written to
	//         outfile.
	void print(ostream & outfile) const;


	//*** Mutators ***

	// post: x has been added as the first double in this
	//         List.
	void insertAsFirst(double x);

    // Insert x as the LAST double in the list. Same as first if started out empty.
    void insertAsLast(double x);

	// pre:  this List is not empty.
	// post: the first double in this List has been removed
	//         from this List and has been returned.
	double removeFirst();

private:
	//*** Inaccessible standard functions ***


	//*** Helper functions ***
	// process part of the linked structure

	// post: a pointer to a copy of the linked structure
	//         targeted by ptr has been returned.
	static Node * clone(Node * ptr);


private:
	Node * first_;

};


//*** Auxiliary functions ***

// post: the doubles in list have been written to outfile
ostream & operator<<(ostream & outfile, const List & list);

#endif
