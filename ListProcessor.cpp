// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
    cout << "Size of cows: " << cows.size() << endl;
    cout << "Total of cows: " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl; 
    cout << "New size: " << cows.size() << endl;
    cout << "Cow sum: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
    cout << "cow size: " << cows.size() << endl;
    cout << "cow sum: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
    cout << "cows size: " << cows.size() << endl;
    cout << "horses size: " << horses.size() << endl;
    cout << "the sums (cow, horse) = (" << cows.sum() << ", " << horses.sum() << ")." << endl << endl;

    cows.insertAsLast(100.00);
    cout << "cows list with inserted as last: " << cows << endl;
    cout << "cows sum: " << cows.sum() << endl;
    cout << "cows size: " << cows.size() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
    cout << "Now size of cows is " << cows.size() << " and of horses " << horses.size() << endl << endl;
    cout << "the sums (cow, horse) = (" << cows.sum() << ", " << horses.sum() << ")." << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
    cout << "The three sizes (cows, horses, pigs) = (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl;
    cout << "sums (cow, horse, pig) = (" << cows.sum() << ", " << horses.sum() << ", " << pigs.sum() << ")." << endl << endl;

    cows.insertAsLast(5);
	pigs = cows;
    horses.insertAsLast(-23.8);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
    cout << "Now the three sizes are (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl << endl;
    cout << "sums (cow, horse, pig) = (" << cows.sum() << ", " << horses.sum() << ", " << pigs.sum() << ")." << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
    cout << "Now the three sizes are (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl << endl;
    cout << "sums (cow, horse, pig) = (" << cows.sum() << ", " << horses.sum() << ", " << pigs.sum() << ")." << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

