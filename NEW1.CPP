#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char str[50];
 int c=0;
 clrscr();
 cout<<"Enter String: ";
 gets(str);
 for(int i=0;str[i]!='\0';i++)
 {c++;
 }
 cout<<c;
 getch();
}
