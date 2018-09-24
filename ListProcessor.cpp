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
    cout << "Size of cows: " << cows.size() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl; 
    cout << "New size: " << cows.size() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
    cout << "cows size: " << cows.size() << endl;
    cout << "horses size: " << horses.size() << endl << endl;    

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
    cout << "Now size of cows is " << cows.size() << " and of horses " << horses.size() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
    cout << "The three sizes (cows, horses, pigs) = (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
    cout << "Now the three sizes are (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
    cout << "Now the three sizes are (" << cows.size() << ", " << horses.size() << ", " << pigs.size() << ")." << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

