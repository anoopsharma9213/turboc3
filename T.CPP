#include <iostream.h>
#include <conio.h>
#include<ctype.h>
#include<stdio.h>
void main()
{clrscr();
int i;
char str[100];
cout<<"enter the str"<<endl;
gets (str);
for(i=0;str[i]!='\0';i++)
{if(str[i]=='a'||str[i]=='A')
str[i]='x';
}puts (str);
getch();
}
