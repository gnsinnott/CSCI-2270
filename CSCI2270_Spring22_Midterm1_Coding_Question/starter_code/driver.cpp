#include <iostream>
#include <string>
using namespace std;

// any file that uses the LinkedList class must include this header file
#include "LinkedList.hpp"

void testCase1(){
	int n = 9;
	int *arrayPtr{ new int[n] };
	// 1 is the head, 9 is the tail
	// 1 2 3 4 5 6 7 8 9
	int testll[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	LinkedList ll;

	for(int i = 0; i<n; i++){
		ll.insertNode(0,testll[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 1:" << endl; 
	cout << "original    >> ";
	ll.printList();

	/* Call to locateMaxMoveHead function  */
	ll.locateMaxMoveHead(arrayPtr);
	cout << "\nexpected    >> 9 1 2 3 4 5 6 7 8" << endl;
	cout << "LL result   >> ";
	ll.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr[x];
	}	
	
	cout << "\n------------------------------------------\n";

	delete[] arrayPtr;
}

void testCase2(){
	int n = 9;
	int *arrayPtr2{ new int[n] };	
	int testll2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	LinkedList ll2;

	for(int i = 0; i<n; i++){
		ll2.insertNode(0,testll2[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 2:" << endl; 
	cout << "original    >> ";
	ll2.printList();

	/* Call to locateMaxMoveHead function  */
	ll2.locateMaxMoveHead(arrayPtr2);
	cout << "\nexpected    >> 9 8 7 6 5 4 3 2 1" << endl;
	cout << "LL result   >> ";
	ll2.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr2[x];
	}

	cout << "\n------------------------------------------\n";\
	delete[] arrayPtr2;
}

void testCase3(){
	int n = 6;
	int *arrayPtr3{ new int[n] };		
	int testll3[] = {8, 7, 9, 13, 5, 2};
	LinkedList ll3;

	for(int i = 0; i<n; i++){
		ll3.insertNode(0,testll3[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 3:" << endl; 
	cout << "original    >> ";
	ll3.printList();

	/* Call to locateMaxMoveHead function  */
	ll3.locateMaxMoveHead(arrayPtr3);
	cout << "\nexpected    >> 13 2 5 9 7 8" << endl;
	cout << "LL result   >> ";
	ll3.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr3[x];
	}

	cout << "\n------------------------------------------\n";
	delete[] arrayPtr3;
}

void testCase4(){
	int n = 1;
	int *arrayPtr4{ new int[n] };		
	int testll4[] = {9};
	LinkedList ll4;

	for(int i = 0; i<n; i++){
		ll4.insertNode(0,testll4[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 4:" << endl; 
	cout << "original    >> ";
	ll4.printList();

	/* Call to locateMaxMoveHead function  */
	ll4.locateMaxMoveHead(arrayPtr4);
	cout << "\nexpected    >> 9" << endl;
	cout << "LL result   >> ";
	ll4.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr4[x];
	}

	cout << "\n------------------------------------------\n";
	delete[] arrayPtr4;
}

void testCase5(){
	int n = 2;
	int *arrayPtr5{ new int[n] };		
	int testll5[] = {9, 1};
	LinkedList ll5;

	for(int i = 0; i<n; i++){
		ll5.insertNode(0,testll5[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 5:" << endl; 
	cout << "original    >> ";
	ll5.printList();

	/* Call to locateMaxMoveHead function  */
	ll5.locateMaxMoveHead(arrayPtr5);
	cout << "\nexpected    >> 9 1" << endl;
	cout << "LL result   >> ";
	ll5.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr5[x];
	}

	cout << "\n------------------------------------------\n";
	delete[] arrayPtr5;
}

void testCase6(){
	int n = 0;
	int *arrayPtr6{ new int[n] };		
	int testll6[] = {};
	LinkedList ll6;

	for(int i = 0; i<n; i++){
		ll6.insertNode(0,testll6[i]);
	}
	cout << "\n------------------------------------------\n";

	cout << "Test Case 6:" << endl; 
	cout << "original    >> ";
	ll6.printList();

	/* Call to locateMaxMoveHead function  */
	ll6.locateMaxMoveHead(arrayPtr6);
	cout << "\nexpected    >> " << endl;
	cout << "LL result   >> ";
	ll6.printList();
	cout << endl;
	cout << "Arr result  >> ";
	for(int x=0; x<n; x++)
    {
		if (x != 0)
		   cout << " ";
		cout << arrayPtr6[x];
	}

	cout << "\n------------------------------------------\n";
	delete[] arrayPtr6;
}

int main(){
	/*
    Test 1 (max at the tail)
    */
	testCase1();
    /*
    Test 2 (max at the front)
    */
   	testCase2();
    /*
    Test 3 (max in the middle)
    */
	testCase3();
    /*
    Test 4 (1 element)
    */
	testCase4();
    /*
    Test 5 (2 elements)
    */
	testCase5();
    /*
    Test 6 (empty list)
    */
	testCase6();

	return 0;
}