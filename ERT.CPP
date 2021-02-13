//write a prog to create a linked stack of integers.allow the user to insert and delete elememts from the stack

#include<iostream.h>
#include<conio.h>

struct node{char a;
	    node*link;
	    }
class stack{node * top;
   public:  stack()
	   {