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
	     char pop()
	     {if(top==NULL)
	      {cout<<"Stack underflow";
	       return 0;}
	     str*ptr=top;
	     top=top->link;
	     char x=ptr->ch;
	     delete ptr;
	     return x;
	     }
	     };
  main()
  {clrscr();
   char s[80];      int i,ct=0;
   Stack string;
   gets(s);
   for(i=0;i<strlen(s);i++)
   string.push(s[i]);
   for(i=0;i<strlen(s)/2;i++)
   {if(s[i] !=string.pop())
	ct++;}
    if(ct==0)cout<<"It is a palindrome";
    else cout<<"Not a palindrom";
   getch();}


OUTPUT:-

Enter a string=nitin
It is a palindrome























