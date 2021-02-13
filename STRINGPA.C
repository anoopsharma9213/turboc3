#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int i,j,flag=0,stln=0;
clrscr();
printf("Enter the string=");
for(i=stln;s[i]!='\0';i++);
gets(s);
for(i=0,j=stln-1;i<j;i++,j--)
{
if(s[i]!=s[j])
flag++;
}
if(flag==0)
printf("String is palidrome");
else
printf("String is not palindrome");
getch();
}
