#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct str{char ch;
	   str*link;};
class Stack{str*top;
	     public:Stack()
	     {top=NULL;}
	     void push(char c)
	     {str*ptr=new str;
	      ptr->ch=c;
	      ptr->link=top;
	      top=ptr;
	      }
	     void pop()
	     {if(top==NULL)
	      {cout<<"Stack underflow";
	       return;}
	     str*ptr=top;
	     top=top->link;
	     cout<<ptr->ch;
	     delete ptr;
	     }
	     };
  main()
  {clrscr();
   char s[80];      int i;
   Stack string;
   gets(s);
   for(i=0;i<strlen(s);i++)
   string.push(s[i]);
   for(i=0;i<strlen(s);i++)
   string.pop();
   getch();}

