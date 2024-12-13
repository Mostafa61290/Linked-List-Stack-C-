#include"stackLinkedlist.h"
#include<iostream>
using namespace std ;
 int main (){
 	stack s ;
 	s.push(5);
 	s.push(6);
	 s.push(7);
	 s.push(9);
	 cout<<"Stack Size : "<<s.stackSize()<<endl ;
	 int x = 9 ;
	 s.pop(x);
	  cout<<"Stack Size : "<<s.stackSize()<<endl ;
 }
