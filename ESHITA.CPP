//write a program to create a linked stack of integers.allow the user to
//insert and delete elements from the stack

#include<iostream.h>
#include<conio.h>

struct node{int a;
	    node*link;
	    };
class stack {
	     node*top;
     public: stack()
	    {top=NULL;}

   void push(int num)
	   {node*ptr=new node;
	    ptr->a=num;
	    ptr->link=top;
	    top=ptr;
	    }
   int pop()
	    {if(top==NULL)
	     {cout<<"stack underflow"<<endl;
	     return 0;
	     }
	     node*ptr=top;
	     top=top->link;
	     int b=ptr->a;
	     delete ptr;
	     return b;
	     }
	     void disp()
	     {node*ptr;

	     while(ptr!=NULL)
	       {
	      cout<<ptr->a;
	      ptr=ptr->link;}
	     }

	       };

void main()
{clrscr();
stack s;
int i;
int ele[20];
cout<<"enter the elements in the stack"<<endl;
for(int j=0;j<20;j++)
cin>>ele[j];
cout<<"enter the element to be inserted"<<endl;
cin>>i;
s.push(i);

cout<<"the new stack is"<<endl;
s.disp();
cout<<endl<<"the deleted element is"<<endl;
cout<<s.pop();
getch();
}


