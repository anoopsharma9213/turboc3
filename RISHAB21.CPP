#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
       void main()
       { clrscr();

       char str[80],t;int i,j;
       cout<<"enter a string";
       gets(str);
       for(i=0;i<=strlen(str)/2;i++)
       {t=str[i];
       str[i]=strlen(str)-1;
       str[i]=t;}
       puts(str);
       getch();}