// source file or implementation file 
#include"stackLinkedlist.h"
#include<iostream>
using namespace std;
stack::stack(){
	// give the default value for the  stack 
	count = 0 ;
	top = NULL ;
	
}
bool stack::stackIsEmpty(){
	return (top==NULL) ;
}
int stack::stackSize(){
	return count ; // as the count will be increased or decreased during pop or push 	
}
void stack::push(int x) {
		Node * add = new Node();
		add->data = x ;
		add->next = top ;
		top = add ;
		count++ ;	
}
void stack::pop(int &x) {

	if (stackIsEmpty()){
		cout<<" stack is Empty \n" ;
	} else {
		x = top->data ; // to save the data in x befor deleted 
		Node *q  ;
		q = top ;
		top = top->next ;
		delete q ;
		count--;	
	}
}

int stack::stackTop(int &x){
	if (stackIsEmpty()){
		x= 0;
		cout<<" stack is Empty \n" ;
	} else {
		x = top->data ; // to save the data in x befor deleted 	
	}
	return x;
}

stack::~stack() {
	if(stackIsEmpty())
		cout<<" stack is Empty \n" ;
		else {
			Node *q  ;
			while(top != NULL){
				q= top ;
				top = top->next ;
				delete q ;
				
			}
		}
}
