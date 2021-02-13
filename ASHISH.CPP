//wap using function to a string and a character from the user and perform the following //
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{clrscr();
void fu(void);
fu();
getch();}
void fu(void)
{char s[50],b,s2[50];
cout<<"enter ur string"<<endl;
gets(s);
cout<<"enter a character "<<endl;
cin>>b;
cout<<"enter space then thank u very much"<<endl;
gets(s2);
for(int i=0;i<50;i++)
{if(s[i]== b)
{s[i]='r';
cout<<"the occurrence of that character in string is:"<<i+1<<endl;
}}strcat(s,s2);
puts(s);}

