#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>




struct string{char n;
	      string*link;
	      };

 class stack{string*top;


 public:stack()
		{top=NULL;}
		void push(char ch)
		{string*ptr=new string;
		ptr->n=ch;

		ptr->link=top;
		top=ptr;}



		 char pop()
		 {if (top==NULL)
		 {cout<<"stack underflow";
		 return '\0' ;}
		 string*ptr;
		 ptr=top;
		 top=top->link;
		char x=ptr->n;
		 delete ptr;
		 return x;  }
		};



       void main()
       { clrscr();
       char str[80];stack s;
       cout<<"enter a string";
       gets(str);
       for(int i=0;i<strlen(str);i++)
       s.push(str[i]);
       for(i=0;i<strlen(str);i++)
       cout<<s.pop();
       getch();}
