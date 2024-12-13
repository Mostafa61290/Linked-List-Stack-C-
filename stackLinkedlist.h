// header file 
// function prototype 
#include <iostream>
class stack {
	// data memeber 
	// create class for input to it the node ( data and pointer )
	private : 
	class Node {
	public : // to access it from stack class  
		int data ; // data
		Node* next ; // pointer to refer to next node 
	};
	// pointer for top type (node ) to refer/point to the top node 
	Node *top ;
	int count ; // variable to count the nodes to dedicate the size of stack 
public : 
 stack(); //constructor 
 bool stackIsEmpty(); // check if stack empty
 bool stackIsFull();  // check if stack full 
 void pop(int &) ;
 void push(int ) ;
 int stackSize();
 int stackTop(int &);  // get the top element without deleting it
 ~stack(); // destructor used to delete the stack after using it 
 
 
};
